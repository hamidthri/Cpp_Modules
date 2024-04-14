/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:06:11 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:23:55 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
# include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm(void);
        virtual ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
        std::string     getTarget() const;
        void            execute(Bureaucrat const & executor) const;
};

std::ostream    &operator<<(std:: ostream& out, ShrubberyCreationForm& Sh);
#endif