/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:07:12 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 12:28:14 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default Constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "parameterised constructor of WrongAnimal" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& orginal)
{
	std::cout << "Copy Constructor of WrongAnimal" << std::endl;
	*this =  orginal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& orginal)
{
    if (this != &orginal) {
        this->type = orginal.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal" << std::endl;
}

const std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void				WrongAnimal::setType(const std::string type)
{
	this->type = type;
}

void				WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound!" << std::endl;
}