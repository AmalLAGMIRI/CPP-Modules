/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:23:06 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 11:23:06 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include<string>
#include<iostream>
#include <exception>

class Bureaucrat
{
    private:
        const std::string  name;
        int grade;
        
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name,int grade);
        Bureaucrat(const Bureaucrat &orginal);
        Bureaucrat& operator=(const Bureaucrat &orginal);
        const std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        ~Bureaucrat();

        class GradeTooHighException :public std::exception
        {
            public:
            const char* what() const throw();
            
        };

        class GradeTooLowException :public std::exception
        {
            public:
            const char* what() const throw();
        };
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& orginal);

#endif