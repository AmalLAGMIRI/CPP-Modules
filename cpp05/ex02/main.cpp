/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:04:15 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 21:04:15 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	
	Bureaucrat		bur1("bur1", 4);
	Bureaucrat		bur2("bur2", 150);
	Bureaucrat		bur3("bur2", 150);

	AForm			*form1 = NULL;
	AForm			*form2 = NULL;
	AForm			*form3 = NULL;

	try
	{
		form1 = new RobotomyRequestForm("p1");
		form2 = new ShrubberyCreationForm("p2");
		form3 = new PresidentialPardonForm("p3");

		std::cout<< "ShrubberyCreationForm" << std::endl;
		bur1.signForm(*form2);
		bur1.executeForm(*form2);
		form2->execute(bur1);
	
		std::cout<< "PresidentialPardonForm" << std::endl;
		bur1.signForm(*form3);
		bur1.executeForm(*form3);
		form3->execute(bur1);

		std::cout<< "RobotomyRequestForm" <<std::endl;
		bur1.signForm(*form1);
		bur1.executeForm(*form1);
		form1->execute(bur1);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	catch(const char *a)
	{
		std::cout << "Exception: " << a << std::endl;
	}
	delete form1;
	delete form2;
	delete form3;
}