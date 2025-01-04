/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:37:41 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 16:24:22 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_H
#define DOG_H

class Dog : public Animal {
    private:
		Brain	*brain;
	public:
		Dog();
		Dog& operator=(const Dog& orginal);
		Dog(const Dog& orginal);
		~Dog();
	 	void	makeSound(void) const;
};

#endif