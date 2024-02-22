/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:23:05 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/22 20:58:02 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap constructor called." << std::endl;
    this->_energy_points = 100;
    this->_hit_points = 100;
    this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destrctor called." << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    if (this->_energy_points > 0)
    {
        std::cout << "FragTrap " << this->_name << " attacks " << target << " , causing " << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_points -= 1;
    }
    else
        std::cout << "FragTrap " << this->_name << "is dead!" << std::endl;
}


void FragTrap::highFivesGuys()
{
    std::cout << "Hey guys, give me a high five!" << std::endl;
}
