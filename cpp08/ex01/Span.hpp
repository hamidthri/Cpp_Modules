/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:22:34 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/27 17:22:36 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


class Span
{
    private:
        unsigned int    N;
        std::vector<int> array;
    public:
        Span();
        ~Span();
        Span(unsigned int N);
        
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        void range_of_iterators(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        
        void arrayPrint() const;

};

std::ostream &operator<<(std::ostream &out, const Span &span);
#endif