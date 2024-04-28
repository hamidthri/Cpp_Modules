/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:47:07 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/27 16:38:09 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

template<typename T>
typename T::const_iterator easyfind(const T& container, int param)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), param);
    if (it != container.end())
        return (it);
	else
        throw std::runtime_error("Couldn't find the param within the container");
}

#endif
