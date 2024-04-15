/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:40:55 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 17:47:26 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): _name("default"), _gradeSign(150), _gradeExec(150)
{
    std::cout << "Default Constructor called." << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    std::cout << "Parametric Constructor called." << std::endl;
}

AForm::~AForm(void)
{
    std::cout << "Deconstructor called." << std::endl;
}

AForm::AForm(const AForm& copy): _name(copy._name), _isSigned(copy._isSigned), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
    std::cout << "Copy Constructor called." << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
    std::cout << "Assignation operator called." << std::endl;
    if (this != &other)
        this->_isSigned = other._isSigned;
    return (*this);
}

std::string AForm::getName(void) const
{
    return(this->_name);
}
bool         AForm::getisSigned(void) const
{
    return(this->_isSigned);
}

int         AForm::getgradeSign(void) const
{
    return(this->_gradeSign);
}

int         AForm::getgradeExec(void) const
{
    return(this->_gradeExec);
}

std::ostream& operator<<(std::ostream& out, const AForm &f)
{
    out << "Name: " << f.getName() << " IsSigned: " << f.getisSigned() << " GradeSigne: " << f.getgradeSign()
    << " GradeExec: " << f.getgradeExec() << std::endl;
    return (out);
}

void    AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (bureaucrat.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
    if(bureaucrat.getGrade() < this->getgradeSign())
        this->_isSigned = true;
}

const char* AForm::GradeTooHighException::what(void) const throw()
{
    return("Grade is too High. ");
}

const char* AForm::GradeTooLowException::what(void) const throw()
{
    return("Grade is too Low. ");
}

const char* AForm::FormNotSignedException::what(void) const throw()
{
    return("Form is not signed. ");
}
