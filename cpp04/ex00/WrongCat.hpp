/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:08:11 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/01 17:23:17 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat& operator=(const WrongCat& orginal);
		WrongCat(const WrongCat& orginal);
		~WrongCat();
		void    makeSound() const;
};

#endif