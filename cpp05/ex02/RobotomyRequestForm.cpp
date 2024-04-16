/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:17:27 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/16 14:18:09 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45), _target("default")
{
    // std::cout << "RobotomyRequestForm default constructor called. " << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm destructor called. " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    // std::cout << "RobotomyRequestForm parametric constructor called. " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): AForm(copy), _target(copy._target)
{
    // std::cout << "RobotomyRequestForm copy constructor called. " << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    // std::cout << "RobotomyRequestForm assignation operator called. " << std::endl;
    if (this != &other)
        this->_target = other._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
    static int i = 0;
    if (bureaucrat.getGrade() > this->getgradeExec())
        throw AForm::GradeTooLowException();
    if (!this->getisSigned())
        throw AForm::FormNotSignedException();
     if (i % 2 == 0)
        std::cout << "BRRRRRRRR...." << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->_target << " has failed to be robotomized" << std::endl;
    i++;
}

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& src)
{
    out << "RobotomyRequestForm: " << src.getName() << "Sign Grade: " << src.getgradeSign() << " Execute Grade: "
        << src.getgradeExec() << " Target: " << src.getTarget() <<std::endl;
    return (out);
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}
