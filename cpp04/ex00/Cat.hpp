/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:03:48 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/25 20:25:30 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    private:

    public:
        Cat();
        Cat(const Cat& other);
        Cat &operator=(const Cat& rhs);
        ~Cat();
        void makeSound() const;
};


#endif