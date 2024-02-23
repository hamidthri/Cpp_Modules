/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:01:46 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/12 18:54:42 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"


Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{ 
}

std::string const &Weapon::getType(void) const
{
    return (this->_type);
}

void	Weapon::setType(std::string type)
{
    this->_type = type;
}
