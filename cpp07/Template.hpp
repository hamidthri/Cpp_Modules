/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:22:36 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/21 19:37:43 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <string>
#include <iostream>
#include <algorithm>

template <typename T>
void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(T a, T b)
{
    return (a < b ? a: b);
}

template <typename T>
T max(T a, T b)
{
    return (a > b ? a: b);
}

# endif