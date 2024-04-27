/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:54:57 by htaheri           #+#    #+#             */
/*   Updated: 2024/04/27 16:20:11 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque> // Default underlying container
#include <iostream>
#include <string>
#include <list>
#include <vector>

template< typename T, typename Container = std::deque<T> > 
class MutantStack: public std::stack<T, Container> 
{
    private:

    public:
        MutantStack() {}
        ~MutantStack() {}
        MutantStack(const MutantStack& other): std::stack<T>(other) {}
        MutantStack& operator=(const MutantStack& other) { std::stack<T>::operator=(other); return *this; }

        class iterator
        {
            private:
                typename std::stack<T, Container >::container_type::iterator it;
            public:
                iterator(typename std::stack<T, Container >::container_type::iterator it): it(it) {}
                ~iterator() {}
                iterator(const iterator& other): it(other.it) {}
                iterator& operator=(const iterator& other) { it = other.it; return *this; }
                iterator& operator++() { ++it; return *this; }
                iterator& operator--() { --it; return *this; }
                T& operator*() { return *it; }
                bool operator==(const iterator& other) { return it == other.it; }
                bool operator!=(const iterator& other) { return it != other.it; }
        };

        // typedef typename std::stack<T, Container >::container_type::iterator iterator;
        typedef typename std::stack<T, Container >::container_type::reverse_iterator reverse_iterator;

        iterator begin() { return iterator(this->c.begin()); }
        iterator end() { return iterator(this->c.end()); }
        reverse_iterator rbegin() { return this->c.rbegin(); }
        reverse_iterator rend() { return this->c.rend(); }

        
};

#endif