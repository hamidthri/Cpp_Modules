/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:46:25 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:46:22 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern(void)
{
    
}
Intern::Intern(const Intern& copy)
{
    *this = copy;
}

Intern& Intern::operator=(const Intern& other)
{
    if (this != &other)
    {
        *this = other;
    }
    return (*this);
}


Intern::~Intern(void)
{
    
}


AForm* Intern::makeForm(std::string name, std::string target)
{
    
}

const char* Intern::FormNotFoundException::what() const throw()
{
    return ("Form not found");
}
