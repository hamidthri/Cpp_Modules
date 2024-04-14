/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:21:00 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 15:22:31 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm(void);
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);

        void        execute(Bureaucrat const & executor) const;
};

#endif