/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:08:58 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/16 19:37:20 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    if (this == &copy)
        return (*this);
    return (*this);
}

// void   ScalarConverter::convertChar(char c)

// void   ScalarConverter::convertInt(int i)

// void   ScalarConverter::convertFloat(float f)

// void   ScalarConverter::convertDouble(double d)

void    ScalarConverter::convert(const std::string &str)
{
    // check if str is a char

    // check if str is an int

    // check if str is a float

    // check if str is a double

}
