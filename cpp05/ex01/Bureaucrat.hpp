/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:31:22 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 17:04:23 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
    public:
          Bureaucrat(void);
          Bureaucrat(int grade);
          Bureaucrat(const std::string name, int grade);
          ~Bureaucrat(void);
          Bureaucrat(const Bureaucrat& copy);
          Bureaucrat& operator=(const Bureaucrat& other);
          
          int       getGrade(void) const;
          const     std::string getName(void) const;

          
          void      incGrade(void);
          void      decGrade(void);
          void      signForm(const Form& form);
          

          class GradeTooLowException: public std::exception
          {
            public:
                const char* what(void) const throw();
          };

          class GradeTooHighException: public std::exception
          {
            public:
                const char* what(void) const throw();
          };
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &b);

# endif