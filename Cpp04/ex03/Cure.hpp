/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:21:05 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/07 13:21:05 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class ICharacter;

class Cure : public  AMateria{
public:
    Cure();
    Cure(const Cure& orginal);
    Cure& operator=(const Cure& orginal);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Cure();
};

#endif