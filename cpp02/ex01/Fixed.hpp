/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:30:30 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/20 18:38:12 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
class Fixed
{
    private:
        int                 _value;
        static const int    _fractionalBits = 2;
    public:
        Fixed(void);
        Fixed(const int num);
        Fixed(const float num);
        Fixed(const Fixed &src);
        ~Fixed(void);

        Fixed &operator=(const Fixed &rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &rhs);
#endif