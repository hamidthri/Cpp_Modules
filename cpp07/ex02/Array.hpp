/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:24:47 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/21 18:17:30 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <stdexcept>

template <typename T>
class Array
{
    private:
        unsigned int n;
        T *_array;
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array(const Array &other);
        Array &operator=(const Array &other);

        unsigned int size() const;
        T &operator[](unsigned int i) const;
        
};

#include "Array.tpp"

#endif