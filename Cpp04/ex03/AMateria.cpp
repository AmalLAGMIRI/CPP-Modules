/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:19:29 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/07 13:19:29 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    std::cout << "Defult constructor of AMateria" << std::endl;
}

AMateria::AMateria(const std::string& type)
{
    std::cout << "constructor Parameterized of AMateria" <<std::endl;
     this->type = type;
}

AMateria::AMateria(const AMateria& orginal)
{
    *this = orginal;
}

AMateria& AMateria::operator=(const AMateria& orginal)
{
    (void) orginal;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "Destrctor of AMateria" << std::endl;
}

const std::string& AMateria::getType() const
{
    return (this->type);
}

t_leaks* AMateria::createNode() {
    t_leaks* ptr = new t_leaks;
    ptr->materia = this;
    ptr->next = NULL;
    return ptr;
}
