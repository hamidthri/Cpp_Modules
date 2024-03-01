/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:03:48 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/24 21:01:33 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
        Brain   *_brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &rhs);
        Cat& operator=(const Cat &rhs);
        void makeSound() const;
};

#endif