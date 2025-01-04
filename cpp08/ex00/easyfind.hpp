/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:55:53 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/20 12:55:53 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include<exception>
#include <algorithm>
#include <iostream>

template<typename T>
void  easyfind(T &container, int value)
{
    if(std::find(container.begin(), container.end(), value) == container.end())
    {
        throw std::runtime_error("not found");
    }
    else
    {
        std::cout<< "found"<<std::endl;
    }
}

#endif