/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:40:46 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/12 17:10:05 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie();
    void    _announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

# endif