/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:49:47 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/05 19:10:56 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout<< "Default constructor in ScalarConverter " <<std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &original)
{
    std::cout<< "copy constructor ScalarConverter" << std::endl;
    *this = original;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& original)
{
    std::cout<< "operator  constructor ScalarConverter" << std::endl;
    (void) original;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
    std::cout<< "Destrctor  constructor ScalarConverter" << std::endl;
}