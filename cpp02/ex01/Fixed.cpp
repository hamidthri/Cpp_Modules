/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:30:26 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/20 19:03:31 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// destructor
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

// copy constructor
Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}


Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = num << this->_fractionalBits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(num * (1 << this->_fractionalBits));
}


Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

float   Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << this->_fractionalBits);
}

int     Fixed::toInt(void) const
{
    return this->_value >> this->_fractionalBits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}