/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:19:37 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:09:28 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// -----------------------------------constructor-----------------------------------
Bureaucrat::Bureaucrat(int grade): name("default"), grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

// -----------------------------------constructor with name-----------------------------------
Bureaucrat::Bureaucrat(const std::string& name, int grade): name(name), grade(grade)
{
    // std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

// -----------------------------------copy constructor-----------------------------------
Bureaucrat::Bureaucrat(const Bureaucrat& copy): name(copy.name), grade(copy.grade)
{
    // std::cout << "Bureaucrat copy constructor called" << std::endl;
}

// -----------------------------------operator-----------------------------------
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    // std::cout << "Bureaucrat operator= called" << std::endl;
    if (this == &copy)
        return (*this);
    this->grade = copy.grade;
    return (*this);
}

// ---------------------------------- operator overloading-----------------------------------
std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (out);
}

// ----------------------------------- destructor -----------------------------------
Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat destructor called" << std::endl;
}

// -----------------------------------Bureaucrat Member functions-----------------------------------

const std::string& Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void    Bureaucrat::increaseGrade()
{
    if (grade < 1)
        throw GradeTooHighException();
    else
        this->grade--;
}

void    Bureaucrat::decreaseGrade()
{
    if (grade > 150)
        throw GradeTooLowException();
    else
        this->grade++;
}

void    Bureaucrat::signForm(const Form& form)
{
    if (form.isSigned())
        std::cout << " bureaucrat " << this->name << " signed " << form.getName() << std::endl;
    else 
        std::cout << " bureaucrat " << this->name << " couldn’t sign " << form.getName() << " because ... " << std::endl;
}

// -----------------------------------Exception what functions-----------------------------------
const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return("Grade Too High Exception");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return("Grade Too Low Exception");
}
