/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:37:20 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/03 09:37:21 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
#ifndef CAT_H
#define CAT_H

class Cat : public Animal {
    private:
		Brain	*brain;
	public:
		Cat();
		Cat& operator=(const Cat& orginal);
		Cat(const Cat& orginal);
		~Cat();
		void    makeSound()const;
};

#endif