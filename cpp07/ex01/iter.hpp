/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:54:55 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/23 12:14:35 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <iostream>
#include <string>
#include <vector>

template <typename T, typename Func>
void iter(T *array, size_t len, Func func) {
    for (size_t i = 0; i < len; ++i) {
        func(array[i]);
    }
}

template <typename T>
void printSquare(const T& elem)
{
    std::cout << elem * elem << " ";
}

class Area
{
    private:
        double _width;
        double _height;
    public:
        Area(double width, double height) : _width(width), _height(height) {}
        double rectangleValue() const { return _width * _height; }
};

void printArea(const Area& area)
{
    std::cout << area.rectangleValue() << " ";
}


struct PrintCube
{
    void operator()(int elem) const
    {
        std::cout << elem * elem * elem << " ";
    }
};

#endif