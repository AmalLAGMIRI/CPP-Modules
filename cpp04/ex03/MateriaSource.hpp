/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 13:22:43 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/07 13:22:43 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class MateriaSource : public  IMateriaSource
{
    private:
            AMateria *learnMa[4];
            t_leaks *head;
    public:
        MateriaSource();
        AMateria* createMateria(std::string const & type);
        MateriaSource& operator=(const MateriaSource& orginal);
        void    learnMateria(AMateria *M);
        MateriaSource(const MateriaSource& orginal);
        ~MateriaSource();
};

#endif