/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:30:10 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/21 19:45:48 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main( void ) 
{
    std::cout << "Test with int array: ";
    int array[] = {1, 2, 3, 4, 5};
    iter(array, 5, printSquare<int>);
    std::cout << std::endl;

    std::cout << "Test with double array: ";
    double doubleArray[] = {1.6, 2.7, 3.8, 4.9, 5.0};
    iter(doubleArray, 5, printSquare<double>);
    std::cout << std::endl;

    std::cout << "Test with struct PrintCube array: ";
    int intArray[] = {1, 2, 3, 4, 5};
    PrintCube printCube;
    iter(intArray, 5, printCube);
    std::cout << std::endl;
    
    std::cout << "Test with class Area array: ";
    Area areaArray[] = {Area(1.1, 2.2), Area(3.3, 4.4), Area(5.5, 6.6)};
    iter(areaArray, 3, printArea);
    std::cout << std::endl;



    return 0;
}


