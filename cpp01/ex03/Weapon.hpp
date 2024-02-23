/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:01:50 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/12 18:53:29 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string	_type;
    
    public:
        Weapon(void);
        Weapon(std::string type);
        ~Weapon(void);

        std::string const&	getType(void) const;
        void				setType(std::string type);
};

#endif 