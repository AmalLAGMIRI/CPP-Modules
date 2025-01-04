/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:37:14 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 21:12:18 by alagmiri         ###   ########.fr       */
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
        *(this->brain) = *(orginal.brain);
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
