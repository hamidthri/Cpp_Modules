/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:26:02 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/12 15:36:15 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable. I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
    return ;
}

Harl::~Harl()
{
    return ;
}

void    Harl::complain(std::string level)
{
    if (level == "debug")
        debug();
    else if (level == "info")
        info();
    else if (level == "warning")
        warning();
    else if (level == "error")
        error();
    else
        std::cout << "Unknown level" << std::endl;
}