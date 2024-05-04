/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:55:29 by htaheri           #+#    #+#             */
/*   Updated: 2024/05/04 21:09:10 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <deque>
#include <algorithm>
#include <list>

class PmergeMe
{
    private:
        std::vector<int> _v1;
        std::vector<std::vector<int> > _v2;

        std::deque<int> _d1;
        std::deque<std::deque<int> > _d2;
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &rhs);

        void readArgs(char **argv);
        
        template <typename Container>
        bool parseArgs(Container &temp, char **argv);

        template <typename Container1, typename Container2>
        void pairing(const Container1& _v1, Container2& _v2);
        
        template <typename Container>
        Container jacobsthal(int size);
        
        template <typename Container>
        void binarySearch(Container &temp, const typename Container::value_type &v1);

        template <typename Container>
        void mergeInsertionSort(Container& largest, const Container& smallest, Container& jacobs);

};

#endif
