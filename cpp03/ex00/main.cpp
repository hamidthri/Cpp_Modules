/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:21:30 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/22 13:21:31 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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