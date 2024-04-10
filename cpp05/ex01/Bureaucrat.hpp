/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:13:59 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/08 15:59:16 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string			name;
		int							grade;
	public:
		Bureaucrat(int grade);
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);

		const std::string&			getName();
		int							getGrade() const;
		void    					increaseGrade();
		void    					decreaseGrade();
		void						signForm(const Form& form);


		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
};


#endif