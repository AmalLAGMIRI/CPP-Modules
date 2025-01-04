/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:08:07 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/20 13:08:07 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */ 

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include<iostream>
#include<vector>
#include<iostream>
#include<deque>
#include<stack>

template <class T, class Container = std::deque<T> > // deque by default
class MutantStack : public std::stack<T, Container>
{
public:
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;
    typedef typename Container::reverse_iterator reverse_iterator;
    typedef typename Container::const_reverse_iterator const_reverse_iterator;

    MutantStack(): std::stack<T, Container>() {} //default constrctor
    MutantStack(const MutantStack &stack): std::stack<T, Container>(stack) {} //copier constrctor
    ~MutantStack() {} // destrctor

    MutantStack& operator=(const MutantStack &stack) //assingnment
    {
        //the base class assignment operator
        std::stack<T, Container>::operator=(stack);
        return *this;
    }
    
    iterator begin()
    {
        return this->c.begin();
    }
    
    const_iterator begin() const
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }

    const_iterator end() const
    {
        return this->c.end();
    }

    reverse_iterator rbegin()
    {
        return  this->c.rbegin();
    }

    const_reverse_iterator rbegin() const
    {
        return this->c.rbegin();
    }

    reverse_iterator rend()
    {
        return this->c.rend();
    }

    const_reverse_iterator rend() const
    {
        return this->c.rend();
    }
};

#endif
