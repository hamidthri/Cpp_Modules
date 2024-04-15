/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 20:16:54 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/15 14:42:36 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <map>
#include <stdexcept>
# include <functional>

class Intern
{
    private:

    public:
        Intern(void);
        ~Intern(void);
        Intern(const Intern& copy);
        Intern& operator=(const Intern& other);

        AForm*  makeForm(std::string name, std::string target);
};

#endif