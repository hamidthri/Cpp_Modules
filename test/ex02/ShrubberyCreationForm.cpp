/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:06:06 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:24:31 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm",
                         145, 137), _target("default")
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm",
                         145, 137), _target(target)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): AForm(copy)
{
    this->_target = copy._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
    if (this == &copy)
        return (*this);
    this->_target = copy._target;
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getExecGrade())  
        throw (Bureaucrat::GradeTooLowException());
    else if (!this->getIsSigned())
        throw (AForm::FormNotSignedException());
    else
    {
        std::ofstream outfile(this->_target + "_shrubbery");
        if (!outfile)
            throw std::runtime_error("Couldn't create file");
        outfile << "       ###" << std::endl;
        outfile << "      #o###" << std::endl;
        outfile << "    #####o###" << std::endl;
        outfile << "   #o#\\#|#/###" << std::endl;
        outfile << "    ###\\|/#o#" << std::endl;
        outfile << "     # }|{  #" << std::endl;
        outfile << "       }|{" << std::endl;
    }
}

std::string     ShrubberyCreationForm::getTarget() const
{
    return(this->_target);
}
