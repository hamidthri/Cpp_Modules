/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:04:57 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/11 16:06:02 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
#include <iomanip>
# include <string.h>


class Contact
{
private:
    std::string    first_name;
    std::string    last_name;
    std::string    nick_name;
    std::string    phone_number;
    std::string    darkest_secret;
    int     index;

public:
    Contact();
    ~Contact();
    std::string     _getInput(std::string) const;
    void            _initialize();
    void            _printContact() const;
    std::string     _checkLen(std::string) const;
    void            _setIndex(int);
    int             isEmpty() const;
};

#endif