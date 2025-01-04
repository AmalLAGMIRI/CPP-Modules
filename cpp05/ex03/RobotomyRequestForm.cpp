/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:03:20 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 22:03:20 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :AForm("RobotomyRequestForm",72,45) ,target("default target")
{
    std::cout<<"Default constrctor in RobotomyRequestForm " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm",72,45)
{
    this->target = target;
    std::cout<< " constructor parameterized RobotomyRequestForm" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &orginal) :AForm("RobotomyRequestForm",72,47)
{
    std::cout<< "Copy constrctor called in Aform" << std::endl;
    *this = orginal;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &orginal)
{
    std::cout<< "Copy assignment operator called in Aform" << std::endl;
    if (this != &orginal) {
       AForm::operator=(orginal); 
        target = orginal.target;
    }
    return *this;
}

std::string RobotomyRequestForm::getTarget()
{
    return this->target;
}

void				RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	 this->checkexecute(executor); 
    srand(time(NULL));
	if (rand() % 2) 
	{
		std::cout << "The victi... " << this->target;
		std::cout << " RobotomyRequestForm executed successfully by robotomized" << std::endl;
	}
	else
		std::cout << "RobotomyRequestForm execution " << this->target <<  "failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout<<"Destrctor in RobotomyRequestForm" << std::endl;
}