/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:46:05 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/18 16:59:55 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

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

    // add FLT_MAX and FLT_MIN
        static double FLT_MAX;
        static double FLT_MIN;

        void   convertChar(char c);
        void   convertInt(int i);
        void   convertFloat(float f);
        void   convertDouble(double d);


    public:
        
        static void    convert(const std::string &str);

        
};


#endif