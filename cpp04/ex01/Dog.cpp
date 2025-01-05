/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:37:36 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 15:49:33 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() 
{
    this-> type = "Dog";
	std::cout << "Default constructor of Dog " <<std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog& orginal):Animal(orginal)
{
	 this->brain = new Brain();
        *this = orginal;
}

Dog&				Dog::operator=(const Dog& orginal)
{
    *this->brain = *orginal.brain;
	this->type = orginal.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "has been destroyed of Dog" << std::endl;
    delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "aboiement" << std::endl;
}