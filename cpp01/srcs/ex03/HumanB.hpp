/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:01:43 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/12 19:05:50 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon          _weapon;
        std::string     _name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    _setWeapon(Weapon& weapon);
        void    _attack();
};
