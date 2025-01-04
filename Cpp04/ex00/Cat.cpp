/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 11:49:04 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/01 13:15:44 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
    this-> type = "Cat";
    std::cout << "Default constructor of  " << this->type << std::endl;
}

Cat :: Cat(const Cat& orginal)
{
    std::cout << "copy constructor of Cat" << std::endl;
    *this = orginal;
}

Cat& Cat::operator=(const Cat& orginal)
{
    if(this != &orginal)
    {
        this->type = orginal .type;
    }
     return (*this);
}

Cat ::~Cat()
{
    std::cout << "Destructor of Cat" <<std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow  Meow!"<< std::endl;
}