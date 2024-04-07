/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:19:37 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/07 16:31:20 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade): name("default"), grade(grade)
{
    if (grade < 1)
        std::cout << " Bureaucrat::GradeTooHighException" << std::endl;
    else if (grade > 150)
        std::cout << " Bureaucrat::GradeTooLowException" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): name(name), grade(grade)
{
    if (grade < 1)
        std::cout << " Bureaucrat::GradeTooHighException" << std::endl;
    else if (grade > 150)
        std::cout << " Bureaucrat::GradeTooLowException" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): name(copy.name), grade(copy.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this == &copy)
        return (*this);
    this->grade = copy.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

const std::string& Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void    Bureaucrat::incGrade()
{
    if (grade < 1)
        std::cout << " Bureaucrat::GradeTooHighException" << std::endl;
    else
        this->grade--;
}

void    Bureaucrat::decGrade()
{
    if (grade > 150)
        std::cout << " Bureaucrat::GradeTooLowException" << std::endl;
    else
        this->grade++;
}