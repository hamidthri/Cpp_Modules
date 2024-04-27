/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:02:06 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/27 16:26:49 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <iostream>
#include "MutantStack.hpp"


int main()
{
    std::cout << "------------ MutantStack ------------" << std::endl;
    MutantStack<int> mstack;
    // push some elements
    mstack.push(5);
    mstack.push(17);
    // access top element
    std::cout << mstack.top() << std::endl;
    // pop an element
    mstack.pop();
    // check the size
    std::cout << mstack.size() << std::endl;
    // push some more elements
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    // initialize an iterator to the beginning of the stack
    MutantStack<int>::iterator it = mstack.begin();
    // initialize an iterator to the end of the stack
    MutantStack<int>::iterator ite = mstack.end();
    // iterate through the stack and display its elements
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    

    std::cout << "------------ vector ------------" << std::endl;

    std::vector<int> v;
    v.push_back(5);
    v.push_back(17);
    std::cout << v.back() << std::endl;
    v.pop_back();
    std::cout << v.size() << std::endl;
    v.push_back(3);
    v.push_back(5);
    v.push_back(737);
    v.push_back(0);
    std::vector<int>::iterator itv = v.begin();
    std::vector<int>::iterator itve = v.end();
    while (itv != itve)
    {
        std::cout << *itv << std::endl;
        ++itv;
    }
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	std::cout << "------------ reverse iterator ------------" << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
    return 0;
}