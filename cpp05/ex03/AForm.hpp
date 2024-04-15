/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:31:34 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 17:05:30 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeSign;
        const int           _gradeExec;
        
    public:
        AForm(void);
        ~AForm(void);
        AForm(std::string name, int gradeSign, int gradeExec);
        AForm(const AForm& copy);
        AForm& operator=(const AForm& other);


        std::string     getName(void) const;
        bool            getisSigned(void) const;
        int             getgradeSign(void) const;
        int             getgradeExec(void) const;


        void            beSigned(const Bureaucrat& b);
        virtual void    execute(Bureaucrat const &executor) const = 0;

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

        class FormNotSignedException: public std::exception
        {
            public:
                const char* what(void) const throw();
        };
};

std::ostream& operator<<(std::ostream& out, const AForm &f);

#endif