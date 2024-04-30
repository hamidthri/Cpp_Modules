/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:38:09 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/30 19:06:54 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(): _BtcAmount(0)
{
}

BitcoinExchange::BitcoinExchange(unsigned int BtcAmount): _BtcAmount(BtcAmount)
{
    
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    *this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
    if (this != &rhs)
        this->_BtcAmount = rhs._BtcAmount;
    return (*this);
}

bool BitcoinExchange::checkDate(std::string date)
{
    if (date.length() != 10)
        return false;
    // 2011-01-03
    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));
    if (year < 2011 || year > 2021)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    return true;
    
}

void BitcoinExchange::loadFile(std::string filename)
{
    std::string line;
    std::string     header;

    std::ifstream file(filename.c_str());
    if (!file.is_open())
        std::cerr << "Couldn't open file.";
    if (!std::getline(file, header))
        std::cerr << "Couldn't read header.";
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        double btc_rate;
        if (std::getline(iss, date, ',') && iss >> btc_rate)
            Dataset[date] = btc_rate;
    }
}

void BitcoinExchange::readInput(std::string dataInput)
{
    std::string line;
    this->loadFile("data.csv");
    std::ifstream file(dataInput.c_str());
    if (!file.is_open())
        std::cerr << "Couldn't open file.";

    while (std::getline(file, line))
    {
        if (line.empty())
            continue;
        std::istringstream iss(line);
        std::string date;
        char verticalline;
        int amount;
        if (iss >> date >> verticalline >> amount)
        {
            if (amount < 0)
            {
                std::cout << "Invalid amount." << std::endl;
                continue;
            }
            if (this->checkDate(date) == false)
            {
                std::cout << "Invalid date." << std::endl;
                continue;
            }
            if (Dataset.find(date) == Dataset.end())
            {
                std::string lower_date = date;
                while (Dataset.find(lower_date) == Dataset.end())
                {
                    lower_date[9] -= 1;
                    if (lower_date[9] == '0')
                    {
                        lower_date[9] = '9';
                        lower_date[8] -= 1;
                    }
                }
                std::cout << date << " => " << amount << " " << (amount * Dataset[lower_date]) << std::endl;
            }
            else
                std::cout << date << " => " << amount << " " << (amount * Dataset[date]) << std::endl;
        }
    }
}