/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:20:06 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:30:06 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP


# include "Bureaucrat.hpp"
#include <iostream>
#include <string>
class Bureaucrat;

class AForm
{
    private:
        std::string _name;
        bool _isSigned;
        const int  _signedGrade;
        const int _execGrade;
        
    public:
        AForm(void);
        virtual ~AForm(void);
        AForm(const std::string& name, const int signedGrade, const int execGrade);
        AForm(const AForm& copy);

        const std::string   getName(void) const;
        int                 getExecGrade(void) const;
        int                 getSignedGrade(void) const;
        bool                getIsSigned(void) const;
        void                beSigned(const Bureaucrat& bureaucrat);
        virtual void        execute(Bureaucrat const & executor) const = 0;
        
        
        class GradeTooHighException: public std::exception
        {
            public:
               virtual const char* what(void) const throw();
        };

        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char * what(void) const throw();
        };

        class FormNotSignedException: public std:: exception
        {
            public:
                virtual const char* what(void) const throw();
        };
    
};


#endif