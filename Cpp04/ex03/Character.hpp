/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:20:10 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/07 13:20:10 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CHARACTER_H
#define  CHARACTER_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public  ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
        t_leaks *head;
    public:
        Character(); 
        Character(const std::string& name);
        Character(const Character& orginal);
        Character& operator=(const Character& orginal);
        const std::string& getName() const;
        void    equip(AMateria *m);
        void use(int idx, ICharacter &target);
        void unequip(int idx);
        ~Character();
};
#endif