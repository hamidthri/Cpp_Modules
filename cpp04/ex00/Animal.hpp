/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:59:30 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/25 18:58:10 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>

class Animal
{
    protected:
        std::string _type;
        

    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &rhs);
        Animal& operator=(const Animal& rhs);
        ~Animal();
        virtual void makeSound() const;
        std::string getType( void) const;
        
};

#endif