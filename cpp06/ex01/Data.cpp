/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:14:34 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/05 19:14:34 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"
#include "Data.hpp"

Data::Data() : name(""),value(1)
{}

Data::Data(int value,std::string name)
{
    this->value = value;
    this->name = name;
}
