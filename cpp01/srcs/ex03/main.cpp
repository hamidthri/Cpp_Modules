/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:35:42 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/12 20:08:45 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include "HumanB.hpp"
# include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob._attack();
        club.setType("some other type of club");
        bob._attack();
        }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim._setWeapon(club);
        jim._attack();
        club.setType("some other type of club");
        jim._attack();
    }
    return 0;
}