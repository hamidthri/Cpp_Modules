/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:56:51 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/22 14:06:08 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}



void ClapTrap::attack(std::string const &target)
{
    if (this->_energy_points > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_attack_damage << " points of damage!" << std::endl;
        this->_energy_points -= 1;
    }
    else
        std::cout << "ClapTrap " << this->_name << "is dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points >= amount)
    {
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
        this->_hit_points -= amount;
    }
    else 
        std::cout << "ClapTrap " << this->_name << "is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points > 0)
    {
        std::cout << "ClapTrap " << this->_name << " is repaired " << amount << " points!" << std::endl;
        this->_hit_points += amount;
        this->_energy_points -= 1;
    }
    else 
        std::cout << "ClapTrap " << this->_name << "is already dead" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "ClapTrap overload called" << std::endl;
    if (this != &rhs)
   {    
        this->_name = rhs._name;
        this->_hit_points = rhs._hit_points;
        this->_energy_points = rhs._energy_points;
        this->_attack_damage = rhs._attack_damage;
    }
    return (*this);
}
