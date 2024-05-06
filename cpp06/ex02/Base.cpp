/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:57:40 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/20 13:36:36 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base *generate(void)
{
    switch (rand() % 3)
    {
    case 0:
        return (new A);
        break;
    case 1:
        return (new B);
        break;
    case 2:
        return (new C);
        break;
    
    default:
        break;
    }
    return (NULL);
}

void identify(Base *p)
{
    if (A* ptr = dynamic_cast<A*>(p))
        std::cout << "Object pointed to by p is of type A" << std::endl;
    else if (B* ptr = dynamic_cast<B*>(p))
        std::cout << "Object pointed to by p is of type B" << std::endl;
    else if (C* ptr = dynamic_cast<C*>(p))
        std::cout << "Object pointed to by p is of type C" << std::endl;
    else
        std::cout << "Object pointed to by p is of unknown type" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void) a;
        std::cout << "Object referenced by p is of type A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);
            (void) b;
            std::cout << "Object referenced by p is of type B" << std::endl;
            return ;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                (void) c;
                std::cout << "Object referenced by p is of type C" << std::endl;
                return ;
            }
            catch(const std::exception& e)
            {
                std::cout << "Object pointed to by p is of unknown type" << std::endl;
            }
        }
    }
}
