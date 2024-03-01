/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:21:16 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 18:23:05 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "Animal";
    std::cout << "WrongAnimal: " << this->_type << " constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->_type = type;
    std::cout << "WrongAnimal: " << this->_type << " constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal: " << this->_type << " copy constructor called!" << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->_type = rhs._type;
    }
    return *this;
}


void WrongAnimal::makeSound() const
{
    std::cout << "Make sound in WrongAnimal class called." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}




