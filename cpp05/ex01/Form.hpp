/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:31:34 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 17:05:30 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeSign;
        const int           _gradeExec;
        
    public:
        Form(void);
        ~Form(void);
        Form(std::string name, int gradeSign, int gradeExec);
        Form(const Form& copy);
        Form& operator=(const Form& other);


        std::string getName(void) const;
        bool        getisSigned(void) const;
        int         getgradeSign(void) const;
        int         getgradeExec(void) const;
        

        void        beSigned(const Bureaucrat& b);

        class GradeTooHighException: public std::exception
        {
            public:
                const char* what(void) const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                const char* what(void) const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const Form &f);

#endif