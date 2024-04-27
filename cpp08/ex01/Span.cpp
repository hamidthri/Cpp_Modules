/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:22:20 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/27 17:28:43 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): N(0), array(0)
{
    
}

Span::~Span()
{
    
}

Span::Span(unsigned int n): N(n), array(N)
{
    
}

void Span::addNumber(int num)
{
    static unsigned int i;

    if (i >= N)
        throw std::runtime_error("There are already N elements in the Span");
    else
        array[i] = num;
    i++;
}

int Span::longestSpan()
{
    if (this->N <= 1)
        throw std::runtime_error("No Span Found");
    std::vector<int>::iterator max = std::max_element(this->array.begin(), this->array.end());
    std::vector<int>::iterator min = std::min_element(this->array.begin(), this->array.end());

    return (*max - *min);
}

int Span::shortestSpan()
{
    unsigned int shortest;
    unsigned int diff;
    
    if (this->N <= 1)
        throw std::runtime_error("No Span Found");
    std::vector<int>::iterator max = std::max_element(this->array.begin(), this->array.end());
    shortest = *max;
    
    for (unsigned int i = 0; i < this->N; i++)
    {
        for (unsigned int j = i + 1; j < this->N; j++)
        {
            diff = std::abs(this->array[i] - this->array[j]);
            shortest = std::min(shortest, diff);
        }
    }
    return (shortest);
}

void Span::arrayPrint() const
{
    for (unsigned int i = 0; i < N; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

void Span::range_of_iterators(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    while(begin != end)
    {
        addNumber(*begin);
        begin++;
    }
}

std::ostream &operator<<(std::ostream &out, const Span &span)
{
    span.arrayPrint();
    return (out);
}
