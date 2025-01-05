/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:36:47 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 15:19:00 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain ::Brain()
{
    std::cout << "Default constructor of Brain" <<std::endl;
}

Brain::Brain(const Brain &orginal)
{
    *this = orginal;
}

Brain:: ~Brain()
{
    std::cout << "Destructor of Brain" << std::endl;
}

Brain&       Brain::operator=(const Brain &orginal)
{
     if (this != &orginal){
         
    for (int i = 0; i < 100 ; i++)
        this->ideas[i] = orginal.ideas[i];
    }
    return(*this);
}