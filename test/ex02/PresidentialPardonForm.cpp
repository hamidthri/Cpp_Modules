/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:27:05 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:26:11 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = "default";
}
// -------------------------------constructor------------------------------
PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

// -------------------------------destructor------------------------------
PresidentialPardonForm::~PresidentialPardonForm(void)
{
    
}

// -------------------------------copy constructor------------------------------
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): AForm(copy)
{
    this->_target = copy._target;
}

// -------------------------------operator=------------------------------

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
    if (this == &copy)
        return (*this);
    this->_target = copy._target;
    return (*this);
}

// -------------------------------execute------------------------------
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
