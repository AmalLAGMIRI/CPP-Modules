/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:07:37 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 12:30:26 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

class WrongAnimal {
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& orginal);
        WrongAnimal(std::string  type);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& orginal);
		const std::string	getType(void)const;
		void				setType(const std::string type);
		void		makeSound() const;
};

#endif