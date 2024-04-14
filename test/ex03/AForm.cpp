/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:13:45 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:11:28 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"
# include "Bureaucrat.hpp"

AForm::AForm(void): _name("default"), _isSigned(false), _signedGrade(150), _execGrade(150)
{
    
}
AForm::AForm(const std::string& name, const int signedGrade, const int execGrade): _name(name)
        , _signedGrade(signedGrade), _execGrade(execGrade)
{
    if (signedGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    else if (signedGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

AForm::~AForm()
{
    
}

AForm::AForm(const AForm& copy): _name(copy._name), _signedGrade(copy._signedGrade),
                            _execGrade(copy._execGrade)
{
    this->_isSigned = copy._isSigned;
}

// std::ostream& AForm::operator<<(std::ostream& out, AForm& obj)
// {
//     out<< obj.
// }

const std::string AForm::getName(void) const
{
    return (_name);
}

int   AForm::getExecGrade(void) const
{
    return(this->_execGrade);
}

int AForm::getSignedGrade(void) const
{
    return(this->_signedGrade);
}

bool AForm::getIsSigned(void) const
{
    return(this->_isSigned);
}

void    AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > 1)
        throw GradeTooHighException();
    else if (bureaucrat.getGrade() < 150)
        throw GradeTooLowException();
    else if (bureaucrat.getGrade() > this->_execGrade)
        this->_isSigned = true;
}

const char* AForm::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too low");
}

const char* AForm::FormNotSignedException::what(void) const throw()
{
    return ("Form is not signed");
}