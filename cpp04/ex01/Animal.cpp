/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:59:27 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 17:20:18 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("ANIIIMAL")
{
    std::cout << "Animal: " << this->_type << " constructor called!" << std::endl;
}

Animal::Animal(std::string type)
{
    this->_type = type;
    std::cout << "Animal: " << this->_type << " constructor called!" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal: " << this->_type << " copy constructor called!" << std::endl;
    *this = other;
}

Animal::~Animal()
{
    std::cout << "Animal destractor called!" << std::endl;
}

Animal& Animal::operator=( const Animal& rhs )
{
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->_type = rhs._type;
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "make sound in Animal class called." << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}
