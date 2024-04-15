/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:39:31 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 20:12:55 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


int main()
{
    Bureaucrat  b1("b1", 1);
    Bureaucrat  b2("b2", 150);
    Bureaucrat  b3("b3", 75);
    Bureaucrat  b4("b4", 75);
    Bureaucrat  b5("b5", 75);
    AForm       *f[3] = {new ShrubberyCreationForm("home"), new RobotomyRequestForm("robot"), new PresidentialPardonForm("pardon")};
    
    for (int i = 0; i < 3; i++)
    {
        try
        {
            f[i]->beSigned(b3);
            f[i]->execute(b3);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}

