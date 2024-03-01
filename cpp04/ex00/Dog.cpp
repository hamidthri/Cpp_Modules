/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:01:41 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/25 20:30:43 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    std::cout << this->_type << " constructor called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called!" << std::endl;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog copy constructor called." << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Dog assignation operator called." << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "wuff!" << std::endl;
}
