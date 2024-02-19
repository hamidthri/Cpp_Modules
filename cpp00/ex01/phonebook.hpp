/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:36:08 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/10 19:24:01 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact _contact[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void    AddContact();
        void    SearchContact();
        void    Exit() const;
        void    _displayContact();
};