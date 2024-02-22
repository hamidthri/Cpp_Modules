/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:22:49 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/22 19:22:51 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string     _name;
        size_t          _hit_points;
        size_t          _energy_points;
        size_t          _attack_damage;

    public:
        ClapTrap(std::string    name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &rhs);
        
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        ClapTrap  &operator=(const ClapTrap &rhs);
          
};

#endif