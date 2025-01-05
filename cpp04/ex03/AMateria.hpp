/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:19:40 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/07 13:19:40 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include<iostream>

class AMateria;

typedef struct t_leaks {
    AMateria *materia;
    struct t_leaks *next;
} t_leaks;

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(const std::string& type);
        const std::string& getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
        t_leaks* createNode();
        virtual ~AMateria(); 
        AMateria(const AMateria& orginal);
        AMateria& operator=(const AMateria& orginal);
};
#endif