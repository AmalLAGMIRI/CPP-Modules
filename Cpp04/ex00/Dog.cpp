/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 11:48:50 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 12:33:16 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() 
{
    this-> type = "Dog";
    std::cout << "Default constructor of Dog " << this->type << std::endl;
}

Dog :: Dog (const Dog& orginal)
{
    std::cout << "copy constructor of Dog" << std::endl;
    *this = orginal;
}
Dog& Dog::operator=(const Dog& orginal)
{
    if(this != &orginal)
    {
        this->type = orginal .type;
    }
     return (*this);
}
Dog ::~Dog()
{
    std::cout << "Destructor of Dog" <<std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "aboiement" << std::endl;
}