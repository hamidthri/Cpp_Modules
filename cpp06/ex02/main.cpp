/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:23:52 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/19 13:40:22 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    // pointer and ref to A
    Base *ptrA = new A;
    Base &refA = *ptrA;
    // pointer and ref to B
    Base *ptrB = new B;
    Base &refB = *ptrB;
    // pointer and ref to C
    Base *ptrC = new C;
    Base &refC = *ptrC;

    // identify the type of the object
    identify(ptrA);
    identify(ptrB);
    identify(ptrC);
    // identify the type of the object
    identify(refA);
    identify(refB);
    identify(refC);

    delete ptrA;
    delete ptrB;
    delete ptrC;
    

    
}