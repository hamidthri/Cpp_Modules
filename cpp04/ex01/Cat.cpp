/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:08:12 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 16:58:28 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    this->_brain = new Brain;
    std::cout << this->_type << " constructor called!" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor called. " << std::endl;
    this->_brain = new Brain(*other._brain);
    this->_type = other._type;
}

Cat& Cat::operator=(const Cat &rhs)
{
    std::cout << "Cat assignation operator called." << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        delete this->_brain;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}
void Cat::makeSound() const
{
    std::cout << "Meo! Meo!" << std::endl;
}
