/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:20:38 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/28 12:55:53 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Array: " << std::endl;
    sp.arrayPrint();
    std::cout << "Shortest Span: ";
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: ";
    std::cout << sp.longestSpan() << std::endl;

    // int nums[] = {18, 45, 63, 21, 33};
    // std::vector<int> numbers(nums, nums + sizeof(nums) / sizeof(nums[0]));

    // sp.range_of_iterators(numbers.begin(), numbers.end());
    // std::cout << "Array: " << std::endl;
    // sp.arrayPrint();

    return 0;
}