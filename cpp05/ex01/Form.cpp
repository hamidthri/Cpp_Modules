/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:40:55 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 17:14:40 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("default"), _gradeSign(150), _gradeExec(150)
{
    std::cout << "Default Constructor called." << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    std::cout << "Parametric Constructor called." << std::endl;
}

Form::~Form(void)
{
    std::cout << "Deconstructor called." << std::endl;
}

Form::Form(const Form& copy): _name(copy._name), _isSigned(copy._isSigned), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
    std::cout << "Copy Constructor called." << std::endl;
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this != &other)
        this->_isSigned = other._isSigned;
    return (*this);
}

std::string Form::getName(void) const
{
    return(this->_name);
}
bool         Form::getisSigned(void) const
{
    return(this->_isSigned);
}

int         Form::getgradeSign(void) const
{
    return(this->_gradeSign);
}

int         Form::getgradeExec(void) const
{
    return(this->_gradeExec);
}

std::ostream& operator<<(std::ostream& out, const Form &f)
{
    out << "Name: " << f.getName() << " IsSigned: " << f.getisSigned() << " GradeSigne: " << f.getgradeSign()
    << " GradeExec: " << f.getgradeExec() << std::endl;
    return (out);
}

void    Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (bureaucrat.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
    if(bureaucrat.getGrade() < this->getgradeSign())
        this->_isSigned = true;
}

const char* Form::GradeTooHighException::what(void) const throw()
{
    return("Grade is too High. ");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
    return("Grade is too Low. ");
}

