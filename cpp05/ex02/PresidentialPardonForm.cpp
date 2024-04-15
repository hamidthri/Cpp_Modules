/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:32:11 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 20:08:49 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5), _target("default")
{
    std::cout << "PresidentialPardonForm default constructor called. " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm destructor called. " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): AForm(copy), _target(copy._target)
{
    std::cout << "PresidentialPardonForm copy constructor called. " << std::endl;
    *this = copy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm parametric constructor called. " << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    std::cout << "PresidentialPardonForm assignation operator called. " << std::endl;
    if (this != &other)
        this->_target = other._target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->getisSigned())
        throw AForm::FormNotSignedException();
    else if (this->getgradeExec() < executor.getGrade())
        throw Bureaucrat::GradeTooLowException();
    std::cout << this->_target <<" has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm& src)
{
    out << "PresidentialPardonForm: " << src.getName() << "Sign Grade: " << src.getgradeSign() << " Execute Grade: "
        << src.getgradeExec() << " Target: " << src.getTarget() <<std::endl;
    return (out);
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}