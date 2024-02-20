/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:24:27 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/20 20:25:09 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

// ---------------------------- Constructors  ----------------------------

Point::Point(void) : _x(0), _y(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
    std::cout << "Parametric constructor called" << std::endl;
}

// ---------------------------- Copy constructor  ----------------------------

Point::Point(const Point &src)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = src;
}

// ---------------------------- Destructor  ----------------------------

Point::~Point(void)
{
    std::cout << "Destructor called" << std::endl;
}

// ---------------------------- Assignation operator  ----------------------------
Point &Point::operator=(const Point &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_x = rhs.getX();
        this->_y = rhs.getY();
    }
    return *this;
}

float   Point::getX(void) const
{
    return this->_x;
}

float   Point::getY(void) const
{
    return this->_y;
}

std::ostream &operator<<(std::ostream &out, const Point &rhs)
{
    out << "Point(" << rhs.getX() << ", " << rhs.getY() << ")";
    return out;
}

