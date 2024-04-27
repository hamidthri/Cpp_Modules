/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:20:38 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/27 17:28:22 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(15);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    int nums[] = {1, 2, 3, 4, 5};
    std::vector<int> numbers(nums, nums + sizeof(nums) / sizeof(nums[0]));

    sp.range_of_iterators(numbers.begin(), numbers.end());
    sp.arrayPrint();

    return 0;
}