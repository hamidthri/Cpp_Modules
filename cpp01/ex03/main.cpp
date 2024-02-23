/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:35:42 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/20 13:20:31 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include "HumanB.hpp"
# include "Weapon.hpp"
// what is the difference between HumanA and HumanB? 
// HumanA always has a weapon, whereas HumanB may not always have a weapon.
// explain why HumanA has a reference to a Weapon, whereas HumanB has a pointer to a Weapon?
// HumanA has a reference to a Weapon because it will always have a weapon, whereas HumanB may not always have a weapon.

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}