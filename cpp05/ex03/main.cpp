/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:01:03 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 22:01:03 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

//  int test()
//  {
	
// 		Intern	intern;
// 		AForm			*form1 = NULL;
// 		AForm			*form2 = NULL;
// 		AForm			*form3 = NULL;
// 		AForm			*form4 = NULL;
// 	try{
// 		form1 = intern.makeForm("shrubbery creation", "shrubbery");
// 		std::cout << *form1 << std::endl;

// 		form2 = intern.makeForm("robotomy request", "robotomy");
// 		std::cout << *form2 << std::endl;

// 		form3 = intern.makeForm("presidential pardon", "presidential");
// 		std::cout << *form3<< std::endl;
		
// 		form4 = intern.makeForm("undefined", "Not");
// 		std::cout << *form4<< std::endl;


// 	}catch(const std::exception & e)
// 	{
// 		std::cout << "Exception: " << e.what() << std::endl;
// 	}
// 	catch(const char *a)
// 	{
// 		std::cout << "Exception: " << a << std::endl;
// 	}
// 	delete form1;
// 	delete form2;
// 	delete form3;
// 	delete form4;

// 	return 0;
//  }

int main()
{
	Intern	intern;
	AForm			*form1 = NULL;
	AForm			*form2 = NULL;
	AForm			*form3 = NULL;
	AForm			*form4 = NULL;
	Bureaucrat b("amal",1);
	try{
		
		form1 = intern.makeForm("robotomy request", "robotomy");

		form1->beSigned(b);
		form1->execute(b);
		std::cout << *form1 << std::endl;
		form2 = intern.makeForm("presidential pardon", "presidential");
		std::cout << *form2 << std::endl;
		form2->beSigned(b);
		form2->execute(b);

		form3 = intern.makeForm("shrubbery creation", "shrubbery");
		std::cout << *form3<< std::endl;
		form1->beSigned(b);
		form1->execute(b);

		form4 = intern.makeForm("undefined", "Not");
		std::cout << *form4<< std::endl;
		form4->beSigned(b);
		form4->execute(b);

	}catch(const std::exception & e)
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
	delete form4;
	//test();
	//system("leaks internn");

	return 0;
}




