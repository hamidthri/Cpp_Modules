/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:01:37 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/12 18:56:10 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name):_weapon(Weapon(""))
{
    this->_name = name;
}

HumanB::~HumanB()
{
    
}

void HumanB::_setWeapon(Weapon& weapon)
{
    this->_weapon = weapon;
}

void HumanB::_attack()
{
    if (this->_weapon.getType() != "")
        std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    else
        std::cout << this->_name << "doesn't have a weapon." << std::endl;
}
