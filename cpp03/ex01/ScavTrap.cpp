
# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : _name(name), _hitpoints(100), _energyPoints(50), _attackDamage(20)
{
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    if (_hitpoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " is dead and cannot attack" << std::endl;
    }
}

void guardGate()
{
    std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
}