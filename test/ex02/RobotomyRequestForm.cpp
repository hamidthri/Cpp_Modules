/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:59:08 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:25:33 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    
}
// -------------------------------constructor------------------------------
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

// -------------------------------copy constructor------------------------------
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): AForm(copy)
{
    this->_target = copy._target;
}
// -------------------------------operator=------------------------------
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
    if (this == &copy)
        return (*this);
    this->_target = copy._target;
    return (*this);
}

// -------------------------------execute------------------------------
void            RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    static int fail;
    
    if (executor.getGrade() > this->getExecGrade())
        throw Bureaucrat::GradeTooLowException();
    else if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    else
    {
        if (fail++ % 2)
            std::cout << "BRRRRRR " << this->_target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "Robotomy failed" << std::endl;
    }
}

