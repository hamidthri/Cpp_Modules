/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:47:55 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/26 17:43:25 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>  // Include the necessary header for std::cout

#include "Dog.hpp" // Include Dog header file if Dog is declared in a separate file
#include "Cat.hpp" 

int main()
{
    const int arraySize = 4;
    Animal* animals[arraySize];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    
    Dog originalDog;
    Dog copiedDog = originalDog;

    Cat originalCat;
    Cat copiedCat;
    
    copiedCat = originalCat;

    // check the content of the copiedDog and copiedCat
    std::cout << "copiedDog type: " << copiedDog.getType() << std::endl;
    std::cout << "copiedCat type: " << copiedCat.getType() << std::endl;
    
    for (int i = 0; i < arraySize; ++i) {
        delete animals[i];
    }   

    

    return 0;
}