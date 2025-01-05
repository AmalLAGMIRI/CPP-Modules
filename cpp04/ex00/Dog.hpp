/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 11:48:35 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/01 13:05:44 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Animal.hpp"

#ifndef DOG_H
#define DOG_H

class Dog : public Animal
{
    public :
    Dog();
    Dog     (const Dog& orginal);
    Dog&    operator=(const Dog& orginal);
    void    makeSound(void) const;
    ~Dog(); 
};


#endif