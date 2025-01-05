/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 10:08:15 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 12:13:23 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor of Animal" <<std::endl;
}
 
Animal::Animal(std::string type)
{
    std::cout << "constructor Parameterized of Animal" <<std::endl;
     this->type =type;
}

Animal::Animal(const Animal& orginal)
{
    std::cout << "copy constructor of Animal" <<std::endl;
    *this = orginal;
}

Animal& Animal::operator=(const Animal& orginal)
{
     if(this != &orginal){
        this->type = orginal .type;
     }

     return *this;
}

const std::string Animal::getType()const
{
    return (this->type);
}

void Animal::setType(const std::string type)
{
    this->type = type;
}

void        Animal::makeSound(void) const
{
    std::cout << "Animal Sound " <<std::endl;
}

Animal::~Animal()
{
    std:: cout << "Destructor of Animal" <<std::endl;
}