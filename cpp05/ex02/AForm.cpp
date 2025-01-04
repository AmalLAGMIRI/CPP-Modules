/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:38:36 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 20:38:36 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():name(""),gradetosign(1),gradeexecute(1)
{
    std::cout<< "Default constrctor in Form" <<std::endl;
}

AForm::AForm(const std::string &name,const int &gradetosign,const int &gradeexecute)
:name(name), gradetosign(gradetosign),gradeexecute(gradeexecute)
{
    std::cout<< "constructor parameterized in Form" <<std::endl;
}


AForm::AForm(const AForm &orginal)
:name(orginal.name) ,_signed(orginal._signed),gradetosign(orginal.gradetosign) ,gradeexecute(orginal.gradeexecute)
{
    *this= orginal;
}

AForm& AForm::operator=(const AForm &orginal)
{
    if(this!= &orginal)
    {
        this->_signed = orginal._signed;
    }
    return(*this);
}

const std::string AForm::getName() const
{
    return this->name;
}

int AForm::getGradetosign() const
{
    return this->gradetosign;
}

bool AForm::getSigned() const
{
    return this->_signed;
}

int AForm::getGradeexecute() const
{
    return this->gradeexecute;
}
const char*		AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is higher");
}

const char*		AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is lower");
}

void AForm::beSigned(const Bureaucrat& b) 
{
    if (b.getGrade() <= gradetosign)
        _signed = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out ,const AForm &orginal)
{
    out << "Form: " << orginal.getName();
    out << ",signed: "<< (orginal.getSigned() ? "true" : "false");
    out<< ",sign Grade required :" << orginal.getGradetosign();
    out <<",Execute Grade Required :" << orginal.getGradeexecute();
    return (out);
}

void AForm::checkexecute(const Bureaucrat& executor) const
{    
    if (!this->_signed)
        throw "Not signed forms cannot be executed!";
    if (executor.getGrade() > gradeexecute)
        throw GradeTooLowException();

}

AForm::~AForm()
{
    std::cout<< "Destrctor in Aform" << std::endl;
}