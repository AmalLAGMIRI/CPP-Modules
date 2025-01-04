/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:28:41 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 10:28:41 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// Bureaucrat a("amal",8);
	// Bureaucrat b(a);
	// b = a;
	// std::cout << b.getName() << std::endl;
	// std::cout << b.getGrade() << std::endl;
	Bureaucrat	bureaucrat1("in", 1);
	Bureaucrat	bureaucrat2("ki", 150);
	std::cout << "created two bureaucrat!" << std::endl;
	std::cout << bureaucrat1 << std::endl;
	std::cout << bureaucrat2 << std::endl;

	try
	{
		Bureaucrat adnan1("bur1", -1);
		std::cout << adnan1 << std::endl;
		//Bureaucrat adnan2("bur2", 151);
		adnan1.incrementGrade();
		std::cout << adnan1 << std::endl;
		//adnan1.decrementGrade();
		//std::cout << adnan1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Cannot create !" << std::endl;
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
}
