/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:27:05 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:31:55 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = "default";
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    else if (executor.getGrade() > this->getExecGrade())
        throw Bureaucrat::GradeTooLowException();
    else
    {
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}