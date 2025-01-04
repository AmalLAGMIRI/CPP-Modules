/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 22:02:28 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 22:02:28 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :AForm("PresidentialPardonForm",25,5) ,target("default target")
{
    std::cout<<"Default constrctor in ShrubberyCreationForm " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :AForm("PresidentialPardonForm",25,5)
{
    this->target = target;
    std::cout<< " constructor parameterized ShrubberyCreationForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &orginal) :AForm("PresidentialPardonForm",25,5)
{
    std::cout<< "Copy constrctor called in Aform" << std::endl;
    *this = orginal;
}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm &orginal)
{
    std::cout<< "Copy assignment operator called in Aform" << std::endl;
    if (this != &orginal) {
        AForm::operator=(orginal);  
        target = orginal.target;
    }
    return *this;
}

std::string PresidentialPardonForm::getTarget() 
{
    return this->target;
}

void					PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
   this->checkexecute(executor);    
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}