/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:08:12 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 19:44:13 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat")
{
    this->_brain = new Brain;
    std::cout << this->_type << " constructor called!" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat &rhs)
{
    std::cout << "Cat copy constructor called!" << std::endl;
    *this = rhs;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->_type = rhs._type;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meo!" << std::endl;
}
