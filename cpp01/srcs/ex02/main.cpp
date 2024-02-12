/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:15:16 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/12 18:09:23 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <iomanip>

int main(void)
{
    std::string     input = "HI THIS IS BRAIN";
    std::string     *stringPTR = &input;
    std::string&    stringREF = input;

    
    std::cout << "Memory Address held by string: " << std::setw(23) << &input << std::endl;
    std::cout << "Memory Address held by stringPTR: " << std::setw(20) << stringPTR << std::endl;
    std::cout << "Memory Address held by stringREF: " << std::setw(20) << &stringREF << std::endl;
    
    std::cout << "String held by string: " << std::setw(33) << input << std::endl;
    std::cout << "String held by stringPTR: " << std::setw(30) << *stringPTR << std::endl;
    std::cout << "String held by stringREF: " << std::setw(30) << stringREF << std::endl;
    
    return (0);
}