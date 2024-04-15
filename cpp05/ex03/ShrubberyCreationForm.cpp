/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:56:38 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/15 13:14:49 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137)
                        , _target("default")
{
    // std::cout << "Default Constructor called. " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137)
                        , _target(target)
{
    // std::cout << "Parametric Constructor called. " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "Destructor called. " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): AForm(copy), 
                        _target(copy._target)            
{
    // std::cout << "Copy Constructor called. " << std::endl;
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "Assignation operator called. " << std::endl;
    if (this != &other)
        this->_target = other._target;
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->getisSigned())
        throw AForm::FormNotSignedException();
    else if (this->getgradeExec() < executor.getGrade())
        throw Bureaucrat::GradeTooLowException();
    std::ofstream out(this->_target + "_shrubbery");
    if (!out)
        throw std::runtime_error("Couldn't create file.");
    out << "       ###" << std::endl;
    out << "      #o###" << std::endl;
    out << "    #####o###" << std::endl;
    out << "   #o#\\#|#/###" << std::endl;
    out << "    ###\\|/#o#" << std::endl;
    out << "     # }|{  #" << std::endl;
    out << "       }|{" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& src)
{
    out << "ShrubberyCreationForm " << src.getName() << " Signe Grade: " << src.getgradeSign()
        << " Execute Grade: " << src.getgradeExec() << " Target: " << src.getTarget();
    return (out);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}

AForm* ShrubberyCreationForm::createShrubberyCreation(std::string target)
{
    return (new ShrubberyCreationForm(target));
}