/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:36:50 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/16 13:43:41 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("default"), _grade(150)
{
    // std::cout << "Bureaucrat Default Constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(int grade): _name("default"), _grade(grade)
{
    // std::cout << "Bureaucrat Parametric Constructor called." << std::endl;
    if (this->_grade > 150)
        throw GradeTooLowException();
    if (this->_grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
    // std::cout << "Bureaucrat Parametric Constructor called." << std::endl;
    if (this->_grade > 150)
        throw GradeTooLowException();
    if (this->_grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name), _grade(copy._grade)
{
    // std::cout << "Bureaucrat Copy Constructor called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    // std::cout << "Bureaucrat Assignation operator called." << std::endl;
    if (this != &other)
        this->_grade = other._grade;
    return (*this);
}


Bureaucrat::~Bureaucrat(void)
{
    // std::cout << "Bureaucrat Deconstructor called." << std::endl;
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

const std::string Bureaucrat::getName(void) const
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
    if (--this->_grade < 1)
        throw GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::decGrade(void)
{
    if (++this->_grade > 150)
        throw GradeTooLowException();
    else
        this->_grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade is: " << b.getGrade() << std::endl;
    return (out);
}
