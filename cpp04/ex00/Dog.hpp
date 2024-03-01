/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:01:51 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/25 20:27:14 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
    private:

    public:
        Dog();
        ~Dog();
        Dog(const Dog& other);
        Dog &operator=(const Dog& rhs);
        void makeSound() const;
};

#endif