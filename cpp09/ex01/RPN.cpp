/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:47:54 by htaheri           #+#    #+#             */
/*   Updated: 2024/05/07 12:08:26 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &other): _con(other._con)
{
}

RPN &RPN::operator=(const RPN &other)
{
    if (this == &other)
        return (*this);
    _con = other._con;
    return (*this);
}


void RPN::operation(std::string::iterator it)
{
    if (_con.size() < 2)
    {
        std::cerr << "Error: Not enough operands" << std::endl;
        return ;
    }
    float a = _con.top();
    _con.pop();
    float b = _con.top();
    if (*it == '+')
        _con.push(a + b);
    else if (*it == '-')
        _con.push(b - a);
    else if (*it == '*')
        _con.push(a * b);
    else if (*it == '/')
    {
        if (a == 0)
        {
            std::cerr << "Error: Division by zero" << std::endl;
            return ;
        }
        _con.push(b / a);
    }
}


void RPN::inputParser(std::string str)
{
    std::string::iterator it = str.begin();
    std::string::iterator ite = str.end();    
    
    while (it != ite)
    {
        if (str.find_first_not_of(" 0123456789+-*/") != std::string::npos)
        {
            std::cerr << "Error: Invalid character" << std::endl;
            return ;
        }
        if (*it == ' ')
            it++;
        while (isdigit(*it))
        {
            int digit = *it - '0';
            if (*(it + 1) == ' ')
                _con.push(digit);
            else
            {
                std::cerr << "Error: Invalid character" << std::endl;
                return ;
            }
            it++;
        }
        if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
            operation(it);
        
        it++;
    }
    std::cout << _con.top() << std::endl;
    
}
