/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:06:06 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:32:56 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm"
                     ,145, 137), _target(target)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    
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

std::ostream    &operator<<(std::ostream& out, ShrubberyCreationForm& obj)
{
    out << "Form name: " << obj.getName() << std::endl;
    out << "Signed grade: " << obj.getSignedGrade() << std::endl;
    out << "Execution grade: " << obj.getExecGrade() << std::endl;
    out << "Is signed: " << obj.getIsSigned() << std::endl;
    out << "Target: " << obj.getTarget() << std::endl;
    return (out);
}