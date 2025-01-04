/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:20:01 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/07 13:20:01 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character()
{
    head = NULL;
    std::cout <<"Defulat constrctor of character" << std::endl;
}

Character::Character(const std::string& name) : name(name)
{
    int i;
    i = 0;
    while (i < 4)
    {
        this->inventory[i] = NULL;
            i++;
    }
    head = NULL;
}

Character::Character(const Character& orginal)
{
 
    int i = 0;
    while (i < 4)
    {
        this->inventory[i] = NULL;
        i++;
    }
    head = NULL;
    *this= orginal;
}

Character& Character::operator=(const Character& orginal)
{
    int i;
    i = 0;
    if(this != &orginal)
    {
        while (i < 4)
        {
            delete this->inventory[i];
            i++;
        }
        i = 0;
        this->name = orginal.name;
        while (i < 4)
        {
            if(!orginal.inventory[i])
                this->inventory[i] = orginal.inventory[i]->clone();
            else
                this->inventory[i] = NULL;
            i++;
        }
    }
    return *this;
}

void Character::equip(AMateria *m)
{

    int     i;

    i   =   0;
    while (m && i < 4)
    {
        if (inventory[i] == NULL)
        {
            this->inventory[i] = m->clone();
            break;
        }
        i++;
    }
    if(i == 4)
    {
        delete (m);
        std::cout<< "Not space in Materia" <<std::endl;
    }
}

void Character::unequip(int idx)
{
    int i;
    i = 0;
    if(idx < 0 || idx > 3)
         return;
    while (i < 4)
    {
        if(i == idx && inventory[i] != NULL)
        {
            t_leaks* newPtr = inventory[i]->createNode();
            newPtr->next = head;
            head = newPtr;
            inventory[i] = NULL;
        }
        i++;
    }    
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4)
    {
        if(inventory[idx] != NULL)
        {
            inventory[idx]->use(target);
        }
    }
}

Character::~Character()
{
    int i;
    
    i   =   0;
    while (i < 4)
    {
        if (inventory[i] != NULL)
            delete inventory[i];
            i++;
    }
    t_leaks* tmp;
    while (head)
    {
        tmp = head;
        head = head->next;
        delete tmp->materia;
        delete tmp;
    }
    std::cout<< "Destrctor of Character" << std::endl;
}

const std::string& Character::getName() const
{
    return name;
}
