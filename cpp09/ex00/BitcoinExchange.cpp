/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:38:09 by htaheri           #+#    #+#             */
/*   Updated: 2024/05/02 12:08:35 by htaheri          ###   ########.fr       */
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
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;
    // 2011-01-03
    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));
    // std::cout << year << " " << month << " " << day << std::endl;
    if (year < 2008)
        return false;
    // check month
    if (month < 1 || month > 12)
        return false;
    // check day because it can be 31, 30, 29, 28
    
    switch (month)
    {
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            if (day < 1 || day > 29)
                return false;
        }
        else
        {
            if (day < 1 || day > 28)
                return false;
        }
    
    case 4: case 6: case 9: case 11:
        if (day < 1 || day > 30)
            return false;
    default:
        if (day < 1 || day > 31)
            return false;
    }
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
    {
        std::cerr << "Couldn't open file.";
        return;
    }

    while (std::getline(file, line))
    {
        if (line.empty())
            continue;
        std::istringstream iss(line);
        std::string date;
        char verticalline;
        float amount;
        iss >> date >> verticalline >> amount;
        // std::cout << "Date: " << date << ", Amount: " << amount << std::endl;
        if (this->checkDate(date) == false)
        {
            std::cout << "Error: bad input" << "=> " << date << std::endl;
            continue;
        }
        
        if (amount < 0) 
        {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }

        if (amount > 1000)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        // Check if the date exists in the dataset
        if (Dataset.find(date) == Dataset.end())
        {
            // Find the closest previous date with available data
            std::map<std::string, double>::iterator it = Dataset.upper_bound(date);
            if (it == Dataset.begin())
            {
                std::cout << "No data available." << std::endl;
                continue;
            }
            it--;
            double prev_rate = it->second;
            double rate = prev_rate * amount;
            std::cout << date << " => " << amount << " = " << rate << std::endl;
        }
        else
        {
            double rate = Dataset[date] * amount;
            std::cout << date << " => " << amount << " = " << rate << std::endl;
        }
        
    }
}

