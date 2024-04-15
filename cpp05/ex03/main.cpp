/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:39:31 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/15 15:04:47 by htaheri          ###   ########.fr       */
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
    AForm*  form;

    // form = intern.makeForm("robotomy request", "Bender");
    // bureaucrat.signForm(*form);
    // bureaucrat.executeForm(*form);
    // // delete form;

    // form = intern.makeForm("presidential pardon", "Zaphod Beeblebrox");
    // bureaucrat.signForm(*form);
    // bureaucrat.executeForm(*form);
    // // delete form;

    form = intern.makeForm("shrubbery creation", "Marvin");
    bureaucrat.signForm(*form);
    bureaucrat.executeForm(*form);
    // delete form;

    return 0;
}

