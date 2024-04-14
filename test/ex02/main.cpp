/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:13:54 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/12 12:48:01 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"


int main(void)
{
    try
    {
        Bureaucrat b1(145);
        AForm       form("hamid", 45, 68);
        b1.signForm(form);
        std::cout << form.isSigned() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}