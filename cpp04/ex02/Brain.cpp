/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:38:47 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 14:58:49 by alagmiri         ###   ########.fr       */
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
    for (int i = 0; i < 100 ; i++)
        this->ideas[i] = orginal.ideas[i];
    return(*this);
}