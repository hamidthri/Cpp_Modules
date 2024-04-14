/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:55:31 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:23:06 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm: public AForm
{
    private:
        std::string _target;
        
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm(void);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);

        void            execute(Bureaucrat const & executor) const;
        
};

#endif