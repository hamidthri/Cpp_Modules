/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:46:05 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/19 14:39:22 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <cfloat>

typedef struct s_type
{
    char c;
    int i;
    float f;
    double d;
}               t_type;


class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);

        void   convertChar(char c);
        void   convertInt(int i);
        void   convertFloat(float f);
        void   convertDouble(double d);


    public:
        
        static void    convert(const std::string &str);

        
};


#endif