/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:39:31 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/14 17:17:18 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
    Form form("Form1", 10, 10);
    Bureaucrat b("Bureaucrat1", 11);
    form.beSigned(b);
    b.signForm(form);
    std::cout << form.getisSigned() << std::endl;
    return (0);
}

