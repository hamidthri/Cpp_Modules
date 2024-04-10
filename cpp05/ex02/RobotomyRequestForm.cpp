/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:59:08 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/09 16:49:09 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", false, 72, 45)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    
}

void            RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    static int fail;
    
    if (executor.getGrade() > this->getExecGrade())
        throw Bureaucrat::GradeTooLowException();
    else if (!this->isSigned())
        throw AForm::FormNotSignedException();
    else
    {
        if (fail++ % 2)
            std::cout << "BRRRRRR " << this->_target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "Robotomy failed" << std::endl;
    }
}