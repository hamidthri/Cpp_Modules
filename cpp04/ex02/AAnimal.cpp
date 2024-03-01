/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:59:27 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 19:35:37 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("AAnimal")
{
    std::cout << "AAnimal " << this->_type << " constructor called!" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
    this->_type = type;
    std::cout << "AAnimal " << this->_type << " constructor called!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &rhs)
{
    std::cout << "AAnimal " << this->_type << " copy constructor called!" << std::endl;
    *this = rhs;
}

AAnimal& AAnimal::operator=( const AAnimal& rhs )
{
    std::cout << "AAnimal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->_type = rhs._type;
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destractor called!" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "make sound in AAnimal class called." << std::endl;
}


std::string AAnimal::getType(void) const
{
    return (this->_type);
}
