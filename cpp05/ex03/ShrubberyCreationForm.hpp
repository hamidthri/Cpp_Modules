/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:52:38 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/15 14:41:17 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
    private:
        std::string     _target;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

        void    execute(Bureaucrat const &executor) const;
        std::string getTarget(void) const;
        static AForm* createShrubberyCreation(std::string target);

};

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& src);
#endif