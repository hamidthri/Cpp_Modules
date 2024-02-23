/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:01:32 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/20 12:59:34 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon)
{
    this->_name = name;
}

HumanA::~HumanA(){
    
}

void    HumanA::attack()
{
    
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
