/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:07:42 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/20 13:07:42 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
int main()
{
    MutantStack<int> mstack;
    MutantStack<int> mstack1(mstack);
    mstack.push(5);
    
    mstack.push(17);
    std::cout << mstack.top() << std::endl;  // 17
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    ++rit;
    --rit;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    std::stack<int> s(mstack);
    return 0;
}
