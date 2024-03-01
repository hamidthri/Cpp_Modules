/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:08:12 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 18:03:45 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << this->_type << " constructor called!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor called." << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat assignation operator called." << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meo! Meo!" << std::endl;
}
