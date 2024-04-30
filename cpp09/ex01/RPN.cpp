/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:47:54 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/30 19:57:36 by htaheri          ###   ########.fr       */
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

