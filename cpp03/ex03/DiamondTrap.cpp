/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:37:20 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/22 21:02:31 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap constructor called!" << std::endl;
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    
    FragTrap::_hit_points = 100;
    ScavTrap::_energy_points = 50;
    FragTrap::_attack_damage = 30;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name: " << this->_name << ", ClapTrap name is: " << ClapTrap::_name << std::endl;
}