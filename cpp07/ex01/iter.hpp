/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:28:30 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/07 12:28:30 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

//#include <cstddef> 
#include <iostream>

template<typename T,typename argfunc>

void iter(T* array, size_t length, argfunc function)
{
    for (size_t i = 0; i < length && function && array; ++i) 
    {
        function(array[i]);
    }
}

template<typename T>

void Afficher(const T& Afary)
{
    std::cout << Afary << " ";
}

#endif