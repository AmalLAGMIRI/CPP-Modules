/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:25:19 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 21:25:19 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :AForm("ShrubberyCreationForm",145,137) ,target("default target")
{
    std::cout<<"Default constrctor in ShrubberyCreationForm " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :AForm("ShrubberyCreationForm",145,137)
{
    this->target = target;
    std::cout<< "constructor parameterized ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &orginal) :AForm("ShrubberyCreationForm",145,137)
{
    
    std::cout<< "Copy constrctor called in Aform" << std::endl;
    *this = orginal;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &orginal)
{
    std::cout<< "Copy assignment operator called in Aform" << std::endl;
    if (this != &orginal) {
        AForm::operator=(orginal);
        target = orginal.target;
    }
    return *this;
}

std::string ShrubberyCreationForm::getTarget()
{
    return this->target;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const 
{
    this->checkexecute(executor);
    std::ofstream file((target + "_shrubbery").c_str());

    if (file.is_open()) 
    {
        file << "   ^   " << std::endl;
        file << "  ^^^  " << std::endl;
        file << " ^^^^^ " << std::endl;
        file << "^^^^^^^" << std::endl;
        file << "   |   " << std::endl;

         file.close();
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout<< "Destrctor in ShrubberyCreationForm" << std::endl;
}



