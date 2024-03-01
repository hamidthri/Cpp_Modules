/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:59:30 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 19:42:59 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP


#include <iostream>

class AAnimal
{
    protected:
        std::string _type;
        

    public:
        AAnimal();
        virtual ~AAnimal() = 0;
        AAnimal(std::string type);
        AAnimal(const AAnimal &rhs);
        AAnimal& operator=(const AAnimal& rhs);
        virtual void makeSound() const = 0;
        
        std::string getType( void) const;
        
};

#endif