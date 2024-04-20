/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:26:49 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/20 13:07:35 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "Serializer.hpp"

int main()
{
    Data data(27, 1.78, "Hamid");
    
    uintptr_t serialized = Serializer::serialize(&data);
    Data *deserialized = Serializer::deserialize(serialized);
    
    if (deserialized == &data)
        std::cout << "Deserialization successful. Pointers are equal." << std::endl;
    else
        std::cout << "Deserialization failed. Pointers are not equal." << std::endl;
    deserialized->printData();
    return (0);
}