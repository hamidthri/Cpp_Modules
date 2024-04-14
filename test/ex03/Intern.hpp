/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:46:29 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:45:26 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include <string>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class RobotomyRequestForm;
class PresidentialPardonForm;
class ShrubberyCreationForm;

class Intern
{
    private:

    public:
        Intern(void);
        ~Intern(void);
        Intern(const Intern& copy);
        
        AForm* makeForm(std::string name, std::string target);
        
    class FormNotFoundException: public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};


#endif