/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:01:41 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 19:47:37 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
    this->_brain = new Brain;
    std::cout << this->_type << " constructor called!" << std::endl;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog deconstructor called!" << std::endl;
}

Dog::Dog(const Dog &rhs)
{
    std::cout << "Dog copy constructor called!" << std::endl;
    this->_brain = new Brain(*rhs._brain);
    this->_type = rhs._type;
}

Dog& Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->_type = rhs._type;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "wuff!" << std::endl;
}

