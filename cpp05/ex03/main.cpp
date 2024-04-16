/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:39:31 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/16 15:38:06 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"


int main()
{
    Intern  intern;
    Bureaucrat  bureaucrat("Bureaucrat", 1);
    Bureaucrat  bureaucrat2("Bureaucrat2", 150);
    AForm*  form;

    std::cout << "====================== presidential pardon (pass)======================" << std::endl;
    form = intern.makeForm("presidential pardon", "Marvin");
    form->beSigned(bureaucrat);
    bureaucrat.signForm(*form);
    bureaucrat.executeForm(*form);
    if (form)
        delete form;
    
    std::cout << "----------------------- presidential pardon (fail) -----------------------" << std::endl;
    form = intern.makeForm("presidential pardon", "Marvin");
    form->beSigned(bureaucrat2);
    bureaucrat2.signForm(*form);
    bureaucrat2.executeForm(*form);
    if (form)
        delete form;

    std::cout << "====================== robotomy request (pass)======================" << std::endl;
    form = intern.makeForm("robotomy request", "Marvin");
    form->beSigned(bureaucrat);
    bureaucrat.signForm(*form);
    bureaucrat.executeForm(*form);
    if (form)
        delete form;
    
    std::cout << "----------------------- robotomy request (fail)-----------------------" << std::endl;
    form = intern.makeForm("robotomy request", "Marvin");
    form->beSigned(bureaucrat2);
    bureaucrat2.signForm(*form);
    bureaucrat2.executeForm(*form);
    if (form)
        delete form;

    std::cout << "====================== shrubbery creation (pass) ======================" << std::endl;
    form = intern.makeForm("shrubbery creation", "Marvin");
    form->beSigned(bureaucrat);
    bureaucrat.signForm(*form);
    bureaucrat.executeForm(*form);
    if (form)
        delete form;

    std::cout << "----------------------- shrubbery creation (fail) -----------------------" << std::endl;
    form = intern.makeForm("shrubbery creation", "Marvin");
    form->beSigned(bureaucrat2);
    bureaucrat2.signForm(*form);
    bureaucrat2.executeForm(*form);
    if (form)
        delete form;

    return 0;
}

