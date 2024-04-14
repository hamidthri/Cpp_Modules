/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:31:22 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 14:30:27 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
    public:
          Bureaucrat(void);
          Bureaucrat(int grade);
          ~Bureaucrat(void);
          Bureaucrat(const Bureaucrat& copy);
          Bureaucrat& operator=(const Bureaucrat& other);
          
          int       getGrade(void);
          const     std::string getName(void);
          void      incGrade(void);
          void      decGrade(void);
          

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

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

# endif