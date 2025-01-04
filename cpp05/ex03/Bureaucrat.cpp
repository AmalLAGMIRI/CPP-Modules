/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:57:06 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 21:57:06 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout<<"Default constructor in Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade):name(name)
{

    if (grade < 1)
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &orginal):name(orginal.name)
{
    std::cout << "Copy constructor operator called " << std::endl;
    *this = orginal;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &orginal)
{
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &orginal)
       grade = orginal.grade;
   
    return (*this);
}

const  std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{
    if(grade > 1)
        grade--;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade(){
    if(grade < 150)
        grade++;
    else
        throw GradeTooLowException();
}

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is higher");
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is lower");
}

void Bureaucrat::signForm(AForm& form) {
        try {
            form.beSigned(*this);
            std::cout << *this << " signed " << form << std::endl;
        } catch (const AForm::GradeTooLowException& e) {
            std::cout << *this << " couldn't sign " << form << " because " << e.what() << std::endl;
        }
}

void				Bureaucrat::executeForm(const AForm& form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executes form " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
        std::cerr << getName() << " failed to execute " << form.getName() << ": " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out ,const Bureaucrat& orginal)
{
    out << orginal.getName() << ", bureaucrat grade" << orginal.getGrade();
    return out;
}

Bureaucrat::~Bureaucrat()
{
    std::cout<< "Destrctor in Bureaucrat" << std::endl;
}