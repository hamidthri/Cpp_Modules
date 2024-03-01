/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:23:14 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 18:24:04 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat : public WrongAnimal
{
    private:
        Brain* _brain;
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat &other);
        virtual ~WrongCat();
        WrongCat& operator=(const WrongCat &rhs);
        void makeSound() const;
};

# endif