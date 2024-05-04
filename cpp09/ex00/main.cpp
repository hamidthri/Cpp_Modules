/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:27:22 by htaheri           #+#    #+#             */
/*   Updated: 2024/05/01 20:13:30 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }
    BitcoinExchange exchange;
    exchange.readInput(argv[1]);
}

// #include <iostream>
// #include <map>
// #include <string>

// int main() {
//     std::map<std::string, float> Dataset;
//     Dataset["2012-01-10"] = 10.0;
//     Dataset["2012-01-11"] = 20.0;
//     Dataset["2012-01-12"] = 30.0;

//     std::string date = "2012-01-13";

//     std::map<std::string, float>::iterator it = Dataset.upper_bound(date);
//     if (it == Dataset.begin()) {
//         std::cerr << "Date not found in dataset" << std::endl;
//         return 1;
//     }
//     --it;
//     std::string previousDate = it->first;
//     float value = it->second;

//     std::cout << "Previous date: " << previousDate << ", Value: " << value << std::endl;

//     return 0;
// }

