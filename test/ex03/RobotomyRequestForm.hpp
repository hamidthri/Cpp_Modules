/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:55:31 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/09 15:04:16 by htaheri          ###   ########.fr       */
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

        void            execute(Bureaucrat const & executor) const;
        
};

#endif