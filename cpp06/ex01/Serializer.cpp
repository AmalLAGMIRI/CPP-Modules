/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:15:56 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/05 19:15:56 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer()
{
    std::cout<<"Default constrctor in serializer" << std::endl;
}

Serializer::Serializer(const Serializer& original)
{
    *this = original;
}

Serializer& Serializer::operator=(const Serializer& original)
{
    (void)original;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
    std::cout<<"uintptr_t"<<std::endl;
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
    std::cout<< "Data*" <<std::endl;
}

Serializer::~Serializer()
{
    std::cout<< "Destrctor in serializer" <<std::endl;
}

