/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:21:34 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/07 13:21:34 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H
#include "AMateria.hpp"
class ICharacter;
class Ice : public  AMateria{
public:
    Ice();
    Ice(const Ice& orginal);
    Ice& operator=(const Ice& orginal);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Ice();
};

#endif