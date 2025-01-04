/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:22:35 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/07 13:22:35 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


MateriaSource::MateriaSource()
{
    std::cout << "Defulat constructor of  Materiasource" << std:: endl;
    int i;
    i = 0;
    while (i < 4)
    {
        this->learnMa[i] = NULL;
            i++;
    }
    head = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& orginal)
{
    std::cout << "copy constructor of Materiasource" << std::endl;
    head = NULL;
    *this = orginal;
    int i = 0;
    while (i < 4)
    {
        this->learnMa[i] = NULL;
        i++;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& orginal)
{
    int i;
    i = 0;
    if (this != &orginal)
    {
        while (i < 4)
        {
            delete this->learnMa[i];
            i++;
        }
        i = 0;
        while (i < 4)
        {
            if (!orginal.learnMa[i])
                this->learnMa[i] = orginal.learnMa[i]->clone();
            else
                this->learnMa[i] = NULL; 
            i++;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *M)
{
    int i = 0;
    while (i < 4)
    {
        if (this->learnMa[i] == NULL)
        {
            this->learnMa[i] = M;
            break;
        }
        i++;
    }
    if ( i == 4)
    {
        delete(M);
        std::cout<< "Not space in Materia" << std::endl;
    }  
}

 AMateria*  MateriaSource::createMateria(std::string const & type)
 {
    int i;
    i = 0;
    while (i < 4)
    {
        if(this->learnMa[i] != NULL)
        {
            if (learnMa[i]->getType() == type)
            {
                t_leaks* newPtr = learnMa[i]->clone()->createNode();
                newPtr->next = head;
                head = newPtr;
                return head->materia;
            }
        }
        i++;
    }
    std::cout << "Unknown Materia type: " << type << std::endl;
    return NULL;
 }

MateriaSource::~MateriaSource()
{
    int i = 0;
    while(i < 4)
    {
        if(learnMa[i] != NULL)
            delete learnMa[i];
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
    std::cout<<"Destrctor of Materiasource" << std::endl;
}