/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:01:40 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/20 13:02:07 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon&     _weapon;
        std::string _name;
    
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void        attack(void);
};

#endif