/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:42:55 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/23 12:46:04 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(NULL), n(0)
{
}

template <typename T>
Array<T>::Array(unsigned int size) : n(size), _array(new T[size]) {}


template <typename T>
Array<T>::Array(const Array &copy): n(copy.n)
{
    _array = new T[n];
    *this = copy;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this == &other)
        return (*this);
    if (_array)
        delete [] _array;
    n = other.n;
    _array = new T[n];
    memcpy(_array, other._array, n * sizeof(T));
    return (*this);
}

template <typename T>
Array<T>::~Array()
{
    if (_array)
        delete [] _array;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
    if (i >= n)
        throw std::out_of_range("Index out of range");
    return (_array[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (n);
}
