/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:35:39 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/18 13:38:45 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                 _value;
        static const int    _fractionalBits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &src);
        ~Fixed(void);

        Fixed &operator=(const Fixed &rhs);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif