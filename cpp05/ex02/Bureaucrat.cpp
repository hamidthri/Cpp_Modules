/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:36:50 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 19:47:49 by htaheri          ###   ########.fr       */
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

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
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

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->_name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::signForm(const AForm& form)
{
    if (form.getisSigned())
        std::cout << " bureaucrat " << this->_name << " signed " << form.getName() << std::endl;
    else 
        std::cout << " bureaucrat " << this->_name << " couldn’t sign " << form.getName() << " because ... " << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return (out);
}
