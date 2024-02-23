/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:02:39 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/20 12:24:06 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main( void ) 
{
    std::string name;

    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
   
    // heap allocation
    Zombie *zombi1 = newZombie(name);
    zombi1->_announce();
    delete zombi1;
    
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    // stack allocation
    randomChump(name);
    return 0;
}
