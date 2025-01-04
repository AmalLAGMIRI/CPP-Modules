/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:58:30 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 21:58:30 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    std::cout << "Default constrctor in Intern "<< std::endl;
}

Intern::Intern(const Intern &orginal)
{
    *this = orginal;
}

Intern& Intern::operator=(const Intern &orginal)
{
    (void) orginal;
    return *this;
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) 
{
    int i;
    AForm *form = NULL;
    std::string str[3] ={"robotomy request","presidential pardon","shrubbery creation"}; 

    for (i = 0; i < 3 && formName != str[i]; i++); 
    switch (i)
    {
            case 0 : 
                form = new RobotomyRequestForm(target);
                break;
            case 1 : 
                form = new PresidentialPardonForm(target);
                 break;
            case 2 :   
                form = new ShrubberyCreationForm(target);
                break;
            default:
                throw FormError();
            break;
    }
    return form;
}

const char* Intern::FormError::what() const throw()
{
    return ("Form not found");
}

Intern::~Intern()
{
    std::cout << "Destrctor in Intern " <<std::endl;
}
