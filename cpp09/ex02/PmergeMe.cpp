/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:55:39 by htaheri           #+#    #+#             */
/*   Updated: 2024/05/07 20:19:17 by htaheri          ###   ########.fr       */
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
        if (it + 1 == _v1.end())
            break;
        
        typename Container2::value_type temp;
        temp.push_back(std::max(*it, *(it + 1)));
        temp.push_back(std::min(*it, *(it + 1)));
        _v2.push_back(temp);
    }
}


template <typename Container>
bool PmergeMe::parseArgs(Container &temp, char **argv)
{
    while (*argv)
    {
        std::stringstream ss(*argv);
        int i;
        std::string str;
        if (!(ss >> i))
            return false;
        if (ss >> str)
            return false;
        temp.push_back(i);
        ++argv;
    }
    return true;
}



void PmergeMe::vectorSort()
{
    clock_t vecStart, vecEnd;
    std::vector<int> largest;
    std::vector<int> smallest;
    std::vector<std::vector<int> > temp;

    std::cout << "Before:  ";
    for (size_t i = 0; i < _v1.size(); ++i)
        std::cout << _v1[i] << " ";
    
    vecStart = clock();
    pairing(_v1, _v2);

    temp.push_back(_v2[0]);
    for (size_t i = 1; i < _v2.size(); ++i) 
            binarySearch(temp, _v2[i]);
    _v2 = temp;

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
    vecEnd = clock();
    std::cout << std::endl << "After:  ";
    for (size_t i = 0; i < largest.size(); ++i)
        std::cout << largest[i] << " ";
    std::cout << std::endl << std::endl;
    std::cout << "Time to process a range of " << _v1.size() << " elements with std::vector : " << (double)(vecEnd - vecStart) / CLOCKS_PER_SEC << " s" << std::endl;
}

void PmergeMe::dequeSort()
{
    clock_t deqStart, deqEnd;
    std::deque<int> largest;
    std::deque<int> smallest;
    std::deque<std::deque<int> > temp;

    deqStart = clock();
    pairing(_d1, _d2);

    temp.push_back(_d2[0]);
    for (size_t i = 1; i < _d2.size(); ++i)
        binarySearch(temp, _d2[i]);
    _d2 = temp;

    for (size_t i = 0; i < _d2.size(); ++i)
    {
        largest.push_back(_d2[i][0]);
        smallest.push_back(_d2[i][1]);
    }
    if (_d1.size() % 2 != 0)
        smallest.push_back(_d1[_d1.size() - 1]);
    
    largest.insert(largest.begin(), smallest[0]);
    smallest.erase(smallest.begin());
    std::deque<int> jacobsthal2 = this->jacobsthal<std::deque<int> >(largest.size() + smallest.size());
    mergeInsertionSort(largest, smallest, jacobsthal2);
    deqEnd = clock();
    std::cout << "Time to process a range of " << _d1.size() << " elements with std::deque : " << (double)(deqEnd - deqStart) / CLOCKS_PER_SEC << " s" << std::endl;
    
}

void PmergeMe::readArgs(char **argv)
{
    if (!parseArgs(this->_v1, argv) || !parseArgs(this->_d1, argv))
    {
        std::cerr << "Error" << std::endl;
        return;
    }

    if (_v1.size() == 1)
    {
        std::cout << "Before : " << _v1[0] << std::endl;
        std::cout << "After : " << _v1[0] << std::endl;
        std::cout << "Time to process a range of 1 element with std::vector : 0 s" << std::endl;
        std::cout << "Time to process a range of 1 element with std::deque : 0 s" << std::endl;
        return;
    }
    // vector part
    vectorSort();
    // Deque part
    dequeSort();
}

