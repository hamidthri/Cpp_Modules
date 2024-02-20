/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piont.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:24:00 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/20 20:35:06 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>

class Point
{
    private:
        float   _x;
        float   _y;
    public:
        Point(void);
        Point(const float x, const float y);
        Point(const Point &src);
        ~Point(void);

        Point &operator=(const Point &rhs);

        float   getX(void) const;
        float   getY(void) const;
};

std::ostream &operator<<(std::ostream &out, const Point &rhs);

# endif