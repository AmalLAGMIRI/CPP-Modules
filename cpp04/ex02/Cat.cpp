/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:38:58 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 15:02:01 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
{
        std::cout << "Default constructor of cat" <<std::endl;
        this->brain = new Brain;
}
  
Cat::Cat(const Cat& orginal): Animal(orginal)
{
	this->brain = new Brain;
        *this = orginal;
}

Cat&				Cat::operator=(const Cat& orginal)
{
        *this->brain = *orginal.brain;
	this->type = orginal.type;
	return (*this);
}

Cat::~Cat()
{
        std::cout << " has been destroyed cat" << std::endl;
         delete this->brain;
}

void    Cat::makeSound() const
{
        std::cout << "Meow  Meow!" << std::endl;
}
