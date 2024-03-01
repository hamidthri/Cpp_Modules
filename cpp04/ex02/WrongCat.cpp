/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:23:10 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 18:25:14 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "WrongCat: " << this->_type << " constructor called!" << std::endl;
}


WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat: " << this->_type << " copy constructor called!" << std::endl;
    this->_brain = new Brain(*other._brain);
    this->_type = other._type;
}

WrongCat::~WrongCat()
{
    delete this->_brain;
    std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        delete this->_brain;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meo! Meo!" << std::endl;
}


