/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:36:47 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/20 20:17:38 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ---------------------------- Constructors  ----------------------------
Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// ---------------------------- Copy constructor  ----------------------------
Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = src;
}

// ---------------------------- Destructor  ----------------------------
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

// ---------------------------- Assignation operator  ----------------------------
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


// ---------------------------- Comparison operators  ----------------------------
bool Fixed::operator>(const Fixed &rhs) const
{
    return this->_value > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const
{
    return this->_value < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed &rhs) const
{
    return this->_value >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed &rhs) const
{
    return this->_value <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed &rhs) const
{
    return this->_value == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const
{
    return this->_value != rhs.getRawBits();
}


// ---------------------------- Arithmetic operators  ----------------------------
Fixed Fixed::operator+(const Fixed &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}


Fixed Fixed::operator/(const Fixed &rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}


// ---------------------------- Increment and Decrement operators  ----------------------------
Fixed &Fixed::operator++(void)
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}


// ---------------------------- Static functions  ----------------------------
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}


// ---------------------------- Constructors  ----------------------------

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

// ---------------------------- Overload <<  ----------------------------
std::ostream &operator<<(std::ostream &o, const Fixed &rhs)
{
    o << rhs.toFloat();
    return o;
}
