/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:36:50 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 14:41:46 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("default"), _grade(150)
{
    // if (this->_grade > 150)
    //     throw GradeTooLowException();
    // if (this->_grade < 1)
    //     throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(int grade): _name("default"), _grade(grade)
{
    if (this->_grade > 150)
        throw GradeTooLowException();
    if (this->_grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name), _grade(copy._grade)
{
    if (this->_grade > 150)
        throw GradeTooLowException();
    if (this->_grade < 1)
        throw GradeTooHighException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        this->_grade = other._grade;
    return (*this);
}


Bureaucrat::~Bureaucrat(void)
{
    
}

int Bureaucrat::getGrade(void)
{
    return (this->_grade);
}

const std::string Bureaucrat::getName(void)
{
    return (this->_name);
}


const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return("Grade is too Low. ");
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return("Grade is too High. ");
}

void Bureaucrat::incGrade(void)
{
    if (this->_grade > 150)
        throw GradeTooLowException();
    else if (this->_grade < 1)
        throw GradeTooLowException();
    else
        this->_grade--;
}

void Bureaucrat::decGrade(void)
{
    if (this->_grade > 150)
        throw GradeTooLowException();
    else if (this->_grade < 1)
        throw GradeTooLowException();
    else
        this->_grade++;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat *b)
{
    out << b->getName() << ", bureaucrat grade " << b->getGrade() << std::endl;
    return (out);
}
