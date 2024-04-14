/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:13:45 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:10:44 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

Form::Form(void): _name("default"), _isSigned(false), _signedGrade(150), _execGrade(150)
{
    
}
Form::Form(const std::string& name, int signedGrade, int execGrade): _name(name),
            _signedGrade(signedGrade), _execGrade(execGrade)
{
    if (signedGrade < 1 || execGrade < 1)
        throw GradeTooHighException();
    else if (signedGrade > 150 || execGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& copy): _name(copy._name), _signedGrade(copy._signedGrade),
                            _execGrade(copy._execGrade)
{
    this->_isSigned = copy._isSigned;
}


const std::string Form::getName(void) const
{
    return (_name);
}

int   Form::getExecGrade(void) const
{
    return(this->_execGrade);
}

int Form::getSignedGrade(void) const
{
    return(this->_signedGrade);
}

bool Form::getIsSigned(void) const
{
    return(this->_isSigned);
}

void    Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > 1)
        throw GradeTooHighException();
    else if (bureaucrat.getGrade() < 150)
        throw GradeTooLowException();
    else if (bureaucrat.getGrade() > this->_signedGrade)
        this->_isSigned = true;
}

const char* Form::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too low");
}

const char* Form::FormNotSignedException::what(void) const throw()
{
    return ("Form is not signed.");
}