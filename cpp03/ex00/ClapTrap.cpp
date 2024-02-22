
# include "ClapTrap.hpp"





#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    if (_hitpoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " is dead and cannot attack" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitpoints > 0)
    {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        _hitpoints -= amount;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " is already dead and cannot take damage" << std::endl;
    }
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitpoints > 0)
    {
        std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points!" << std::endl;
        _hitpoints += amount;
        this->_energyPoints -= 1;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " is already dead and cannot be repaired" << std::endl;
    }
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitpoints = rhs._hitpoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return *this;
}

