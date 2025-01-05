/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:36:41 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 12:47:33 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal{
    protected:
        std::string type; 
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& orginal);
        Animal& operator=(const Animal& orginal);
        const std::string getType()const;
        void  setType(const std::string type);
        virtual void    makeSound(void) const;
        virtual ~Animal(); 
};

#endif