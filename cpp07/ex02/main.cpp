/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:24:21 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/23 12:41:22 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<double>  A1(5);
    Array<double>  A2(5);

    
    // check content of A2 before assign
    for (unsigned int i = 0; i < A2.size(); i++)
        std::cout << "element " << i << " of A2 before assign = " << A2[i] << std::endl;

    // fill A1 with values
    for (unsigned int i = 0; i < A1.size(); i++)
        A1[i] = i * 10.1;

    // testing assign operator
    std::cout << "--------------- testing assign operator --------------" << std::endl;
    for (unsigned int i = 0; i < A1.size(); i++)
        std::cout << "element " << i << " of A1 = " << A1[i] << std::endl;
    
    A2 = A1;
    for (unsigned int i = 0; i < A2.size(); i++)
        std::cout << "element " << i << " of A2 after assign = " << A2[i] << std::endl;

    
    // testing if we can access an element out of range
    std::cout << "--------------- testing if we can access an element out of range --------------" << std::endl;
    try
    {
        A1[5] = 42;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    // testing copy constructor
    std::cout << "--------------- testing copy constructor --------------" << std::endl;
    Array<double>  A3(A1);
    for (unsigned int i = 0; i < A1.size(); i++)
        std::cout << "element " << i << " of A1 = " << A1[i] << std::endl;

    for (unsigned int i = 0; i < A3.size(); i++)
        std::cout << "element " << i << " of A3 = " << A3[i] << std::endl;
}