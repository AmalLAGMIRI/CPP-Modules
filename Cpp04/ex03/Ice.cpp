/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:21:19 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/07 13:21:19 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include    "ICharacter.hpp"

Ice::Ice()
{
    type = "ice";
    std::cout <<"Defulat constrctor of Ice" << std::endl;
}

Ice::Ice(const Ice& orginal):AMateria(orginal)
{
    std::cout<< "copy constructor of Ice"<<std::endl;
    *this= orginal;
}

Ice& Ice::operator=(const Ice& orginal)
{
    (void)orginal;
    return *this;
}

AMateria*       Ice::clone() const
{
	return (new Ice());
}

void            Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at"<< target.getName() << "*" << std::endl;
}

Ice::~Ice()
{
    std::cout<< "Destrctor of Ice" << std::endl;
}