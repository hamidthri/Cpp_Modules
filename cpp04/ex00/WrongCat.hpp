/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:48:45 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 17:49:12 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// To ensure you understood how it works, implement a WrongCat class that inherits
// from a WrongAnimal class.

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat& operator=(const WrongCat &rhs);
        void makeSound() const;
};

#endif
