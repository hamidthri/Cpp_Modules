/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:13:54 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:42:34 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
    Bureaucrat bureaucrat("Bureaucrat", 1);
    AForm* form;

    try
    {
        form = &intern.makeForm("robotomy request", "Bender");
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
        delete form;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        form = &intern.makeForm("presidential pardon", "Bender");
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
        delete form;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        form = &intern.makeForm("shrubbery creation", "Bender");
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
        delete form;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        form = &intern.makeForm("unknown form", "Bender");
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
        delete form;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}