

# include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("ClapTrap");
    ClapTrap claptrap2("ClapTrap2");

    claptrap.attack("ClapTrap2");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(5);

    return 0;
}
