/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:55:39 by htaheri           #+#    #+#             */
/*   Updated: 2024/05/04 21:11:59 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    *this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
    if (this == &rhs)
        return (*this);
    return (*this);
}

template <typename Container>
Container PmergeMe::jacobsthal(int size)
{
    Container jacobsthal;
    jacobsthal.push_back(0);
    jacobsthal.push_back(1);
    for (int i = 2; i < size; ++i)
        jacobsthal.push_back(jacobsthal[i - 1] + 2 * jacobsthal[i - 2]);
    return jacobsthal;
}


template <typename Container>
void PmergeMe::binarySearch(Container &temp, const typename Container::value_type &v1)
{
    int lowIndex = 0;
    int highIndex = temp.size() - 1;
    while (lowIndex <= highIndex)
    {
        int midIndex = (lowIndex + highIndex) / 2;
        typename Container::value_type mid = temp[midIndex];
        if (mid[0] == v1[0]) {
                temp.insert(temp.begin() + midIndex, v1);
                return;
            } else if (v1[0] < mid[0]) {
                highIndex = midIndex - 1;
            } else {
                lowIndex = midIndex + 1;
            }
    }
    temp.insert(temp.begin() + lowIndex, v1);
}

template <typename Container>
void PmergeMe::mergeInsertionSort(Container& largest, const Container& smallest, Container& jacobs)
{
    for (size_t i = 0; i < smallest.size(); ++i)
    {
        int temp = smallest[i];
        for (size_t j = 0; j < jacobs.size(); ++j)
        {
            int k = jacobs[j]; 
            if (k >= static_cast<int>(largest.size()))
                k = largest.size() - 1;
            if (temp < largest[k])
            {
                while (k >= 0 && temp < largest[k])
                    k--;
                largest.insert(largest.begin() + k + 1, temp);
                break;
            }
            if (temp > largest[largest.size() - 1])
                largest.push_back(temp);
        }
    }
}

template <typename Container1, typename Container2>
void PmergeMe::pairing(const Container1& _v1, Container2& _v2)
{
    for (typename Container1::const_iterator it = _v1.begin(); it != _v1.end(); it += 2)
    {
        if (std::next(it) == _v1.end())
            break;
        
        typename Container2::value_type temp;
        temp.push_back(std::max(*it, *std::next(it)));
        temp.push_back(std::min(*it, *std::next(it)));
        _v2.push_back(temp);
    }
}


template <typename Container>
bool PmergeMe::parseArgs(Container &temp, char **argv)
{
    while (*argv)
    {
        if (std::isdigit(*argv[0]))
            temp.push_back(std::stoi(*argv));
        else
            return false;
        argv++;
    }
    return true;
}

void PmergeMe::readArgs(char **argv)
{
    if (!parseArgs(this->_v1, argv) || !parseArgs(this->_d1, argv))
    {
        std::cerr << "Invalid input" << std::endl;
        return;
    }
        
    if (_v1.size() == 2)
    {
        if (_v1[0] > _v1[1])
        {
            std::cout << "Before swap: " << _v1[0] << " " << _v1[1] << std::endl;
            std::cout << "After swap: " << _v1[1] << " " << _v1[0] << std::endl;
        }
        else
        {
            std::cout << "Before swap: " << _v1[0] << " " << _v1[1] << std::endl;
            std::cout << "After swap: " << _v1[0] << " " << _v1[1] << std::endl;
        }
    }

    pairing(_v1, _v2);
    pairing(_d1, _d2);
    
    std::vector<std::vector<int> > temp;
        temp.push_back(_v2[0]);
    for (size_t i = 1; i < _v2.size(); ++i) 
            binarySearch(temp, _v2[i]);
    _v2 = temp;
    
    std::deque<std::deque<int> > temp2;
    temp2.push_back(_d2[0]);
    for (size_t i = 1; i < _d2.size(); ++i)
        binarySearch(temp2, _d2[i]);
    _d2 = temp2;

    std::vector<int> largest;
    std::vector<int> smallest;

    for (size_t i = 0; i < _v2.size(); ++i)
    {
        largest.push_back(_v2[i][0]);
        smallest.push_back(_v2[i][1]);
    }
    if (_v1.size() % 2 != 0)
        smallest.push_back(_v1[_v1.size() - 1]);
    
    largest.insert(largest.begin(), smallest[0]);
    smallest.erase(smallest.begin());
    std::vector<int> jacobsthal = this->jacobsthal<std::vector<int> >(largest.size() + smallest.size());
    mergeInsertionSort(largest, smallest, jacobsthal);
    
    std::cout << "Merged vectors: ";
    for (size_t i = 0; i < largest.size(); ++i)
        std::cout << largest[i] << " ";

    std::deque<int> largest2;
    std::deque<int> smallest2;
    
    for (size_t i = 0; i < _d2.size(); ++i)
    {
        largest2.push_back(_d2[i][0]);
        smallest2.push_back(_d2[i][1]);
    }
    if (_d1.size() % 2 != 0)
        smallest2.push_back(_d1[_d1.size() - 1]);
    
    largest2.insert(largest2.begin(), smallest2[0]);
    smallest2.erase(smallest2.begin());
    std::deque<int> jacobsthal2 = this->jacobsthal<std::deque<int> >(largest2.size() + smallest2.size());
    mergeInsertionSort(largest2, smallest2, jacobsthal2);
    
    std::cout << std::endl << "Merged deques: ";
    for (size_t i = 0; i < largest2.size(); ++i)
        std::cout << largest2[i] << " ";
}

