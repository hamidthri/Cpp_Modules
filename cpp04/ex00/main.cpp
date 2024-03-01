/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:47:55 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 18:09:14 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

#include "Dog.hpp" // Include Dog header file if Dog is declared in a separate file
#include "Cat.hpp" 

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    
    const WrongAnimal* metaWrong = new WrongAnimal();
    const WrongAnimal* iWrong = new WrongCat();
    std::cout << iWrong->getType() << " " << std::endl;
    iWrong->makeSound();
    metaWrong->makeSound();
    
    return 0;
}