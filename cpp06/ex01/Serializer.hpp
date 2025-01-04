/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:16:03 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/05 19:16:03 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
#define Serializer_HPP
 
#include <stdint.h>
#include <iostream>
//#include <cstdint>

struct Data;
class  Serializer
{

    Serializer();
    Serializer(const Serializer& original);
    Serializer& operator=(const Serializer& original);

    public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    ~Serializer();

};

#endif