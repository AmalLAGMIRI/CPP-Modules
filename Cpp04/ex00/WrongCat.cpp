/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:08:07 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 12:40:05 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
        this->type = "WrongCat";
        std::cout << "Default constructor of WrongCat " <<std::endl;
}

WrongCat::~WrongCat()
{
        std::cout << " has been destroyed WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& orginal)
{
	std::cout << "Copy Constructor of WrongCat " << std::endl;
        *this = orginal;
}

WrongCat&				WrongCat::operator=(const WrongCat& orginal)
{
	this->type = orginal.type;
	return (*this);
}

void    WrongCat::makeSound() const
{
        std::cout << "Meow  Meow!" << std::endl;
}
