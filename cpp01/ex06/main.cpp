/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:54:40 by htaheri           #+#    #+#             */
/*   Updated: 2024/02/20 14:57:43 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "harlFilter.hpp"

int main(int ac, char **av)
{
    harlFilter harl;

    if (ac != 2)
    {
        std::cout << "Usage: ./harlFilter [debug/info/warning/error]" << std::endl;
        return (1);
    }
    harl.complain(av[1]);
    return (0);
}