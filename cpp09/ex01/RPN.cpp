/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:26:28 by alagmiri          #+#    #+#             */
/*   Updated: 2024/03/06 19:26:28 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int opeartion(int op1,int op2,char result)
{

    if(result == '+')
        return (op1 + op2);
    if(result == '-')
        return (op1 - op2);
    if(result == '*')
        return (op1 * op2);

    else if(result == '/')
    {
        if( op2 == 0)
        {
            std::cout << "invlid to divistion by zero" << std::endl;
            exit(1);
        }
        return ( op1 / op2);
    }
    return (0);
}

void Rev_Notation(const std::string& expr)
{
    std::stack<int> stack;
    std::istringstream str(expr); 
    std::string buf;
    int i;
    i = 0;

    while (std::getline(str,buf, ' '))
    {
        if(buf.length() != 1)
        {
            std::cout << "Error:" << std::endl;
                return ;
        } 
        if(std::isdigit(buf[i]))
        {
                stack.push(atoi(buf.c_str()));
        }
        else if ((buf[i] == '+' || buf[i] == '-' || buf[i] == '*' || buf[i] == '/'))
        {
            int top1;
            int top2;

            if (stack.empty())
            {
                std::cout << "Error:" << std::endl;
                return ;
            }
            else
            {
                top1 = stack.top();
                stack.pop();
            }
            if (stack.empty())
            {
                std::cout << "Error:" << std::endl;
                return ;
            }
            else
            {
                top2 = stack.top();
                stack.pop();
                stack.push(opeartion(top2, top1, buf[i]));
            }
        }
        else
        {
            std::cout << "Error:" << std::endl;
            return ;
        }
    }

    if (stack.size() == 1)
    {
        std::cout << stack.top() << std::endl;
        
    }
    else
    {
        std::cout << "Error:" << std::endl;
    }
}
