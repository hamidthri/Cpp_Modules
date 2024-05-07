/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:29:16 by htaheri           #+#    #+#             */
/*   Updated: 2024/05/07 13:14:02 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange
{
    private:
        unsigned int _BtcAmount;
    public:
        BitcoinExchange();
        BitcoinExchange(unsigned int BtcAmount);
        BitcoinExchange(BitcoinExchange const &src);
        ~BitcoinExchange();
        BitcoinExchange &operator=(BitcoinExchange const &rhs);

        void loadFile(std::string data);
        void readInput(std::string input);
        bool checkDate(std::string date);
        void dateNotFound(std::string date, float amount);
        
        std::map<std::string, double> Dataset;
};


#endif