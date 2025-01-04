/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:14:54 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/05 19:14:54 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serializer.hpp"
#include "Data.hpp"

int main()
{ 
    Data data2(20, "amal"); 
    Data		*ptr;
    uintptr_t	raw;

   raw = Serializer::serialize(&data2);
   ptr = Serializer::deserialize(raw);

    std::cout << ptr->name <<" "<< ptr->value << std::endl;

}
