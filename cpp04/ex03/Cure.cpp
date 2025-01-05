/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:19:19 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/07 13:19:19 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
#include    "ICharacter.hpp"

Cure::Cure()
{
    type = "cure";
    std::cout <<"Defulat constrctor of Cure" << std::endl;
}

Cure::Cure(const Cure& orginal):AMateria(orginal)
{
    std::cout<< "copy constructor of Cure"<<std::endl;
    *this = orginal;
}

Cure& Cure::operator=(const Cure& orginal)
{
    (void)orginal;
    return *this;
}

AMateria*       Cure::clone() const
{
	return (new Cure());
}

void            Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
    std::cout<< "Destrctor of Cure" << std::endl;
}