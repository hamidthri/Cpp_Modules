/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:20:31 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/22 20:58:21 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap constructor called!" << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called!" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    if (this->_energy_points > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " , causing " << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_points -= 1;
    }
    else
        std::cout << "ScavTrap " << this->_name << "is dead!" << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this-> _name << " is now in Gate keeper mode." << std::endl;
}
