/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:37:10 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/25 20:42:01 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called." << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain destructor called!" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& rhs)
{
    std::cout << "Brain assignation operator called." << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = rhs._ideas[i];
        }
    }
    return (*this);
}
