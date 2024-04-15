/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 20:22:01 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/15 14:56:37 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    
}

Intern::~Intern(void)
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
        
    }
    return (*this);
}

AForm*  Intern::makeForm(std::string name, std::string target)
{
    AForm* (*form_functions[3])(std::string target) = {
        RobotomyRequestForm::createRobotomyRequest,
        ShrubberyCreationForm::createShrubberyCreation,
        PresidentialPardonForm::createPresidentialPardon
    };
    std::string availableforms[] = {"robotomy request", "shrubbery creation", "presidential pardon" };
    for (int i = 0; i < 3; i++)
    {
        if (name == availableforms[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return (form_functions[i](target));
        }
    }
    throw std::runtime_error("Intern couldn't create form: " + name + " because it's not available.");
    
    // std::map<std::string, std::function<AForm*(std::string)> > formMap = {
    //     {"robotomy request", &RobotomyRequestForm::createRobotomyRequest},
    //     {"shrubbery creation", &ShrubberyCreationForm::createShrubberyCreation},
    //     {"presidential pardon", &PresidentialPardonForm::createPresidentialPardon}
    // };
    
    // typedef AForm* (*form_functions)(std::string);
    // std::map<std::string, form_functions> formMap;
    // formMap["robotomy request"] = &RobotomyRequestForm::createRobotomyRequest;
    // formMap["shrubbery creation"] = &ShrubberyCreationForm::createShrubberyCreation;
    // formMap["presidential pardon"] = &PresidentialPardonForm::createPresidentialPardon;
   
    // for (std::map<std::string, form_functions>::iterator it = formMap.begin(); it != formMap.end(); it++)
    // {
    //     if (name == it->first)
    //     {
    //         std::cout << "Intern creates " << name << std::endl;
    //         return (it->second(target));
    //     }
    // }
    // throw std::runtime_error("Intern couldn't create form: " + name + " because it's not available.");
}
