/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:27:41 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 14:27:41 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():name(""),gradetosign(1),gradeexecute(1)
{
    std::cout<< "Default constrctor in Form" <<std::endl;
}

Form::Form(const std::string &name,const int &gradetosign,const int &gradeexecute)
:name(name), gradetosign(gradetosign),gradeexecute(gradeexecute)
{
    std::cout<<"constructor parameterized in Form" <<std::endl;
}

Form::Form(const Form &orginal) :name(orginal.name) ,_signed(orginal._signed),gradetosign(orginal.gradetosign) ,gradeexecute(orginal.gradeexecute)
{
    std::cout<< "constrctor par copier in form " <<std::endl;
    *this= orginal;
}

const std::string Form::getName() const
{
    return (this->name);
}

int Form::getGradetosign() const
{
    return this->gradetosign;
}

bool Form::getSigned() const
{
    return this->_signed;
}

int Form::getGradeexecute() const
{
    return this->gradeexecute;
}
const char*		Form::GradeTooHighException::what() const throw()
{
	return ("Grade is higher");
}

const char*		Form::GradeTooLowException::what() const throw()
{
	return ("Grade is lower");
}

Form& Form::operator=(const Form &orginal)
{
    std::cout<< "Copy assignment operator called" << std::endl;
    if(this!= &orginal)
    {
        this->_signed=orginal._signed;
    }
    return(*this);
}

void Form::beSigned(const Bureaucrat& b) 
{   
    if (b.getGrade() <= gradetosign)
        _signed = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out ,const Form &orginal)
{
    out << "Form: " << orginal.getName();
    out << ",signed: "<< (orginal.getSigned() ? "true" : "false");
    out<< ",sign Grade required :" << orginal.getGradetosign();
    out <<",Execute Grade Required :" << orginal.getGradeexecute();
    return (out);
}

Form::~Form()
{
    std::cout<<"Destrctor in Form" <<std::endl;
}

