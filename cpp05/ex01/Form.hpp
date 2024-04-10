/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:13:48 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/09 16:19:25 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _signedGrade;
        const int           _execGrade;
    public:
        Form(void);
        Form(const std::string& name, int signedGrade, int execGrade);
        Form(const Form& copy);

        const std::string   getName(void) const;
        int                 getGrade(void) const;
        bool                isSigned(void) const;
        int                 getExecGrade(void) const;
        int                 getSignedGrade(void) const;
        void                beSigned(const Bureaucrat& bureaucrat);

    class GradeTooHighException: std::exception
    {
        public:
            virtual const char* what(void) const throw();
    };
    
    class GradeTooLowException: std::exception
    {
        public:
            virtual const char* what(void) const throw();
    };
    
    class FormNotSignedException: std::exception
    {
        public:
            virtual const char* what(void) const throw();
    };

};

#endif