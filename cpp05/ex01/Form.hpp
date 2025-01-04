/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:28:13 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 14:28:13 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include<string>
#include<iostream>
#include <exception>

class Bureaucrat;
class Form
{
    private:
        const std::string name;
        bool _signed;
        const int gradetosign;
        const int gradeexecute;
    public:

        Form();
        Form(const std::string &name,const int &gradetosign,const int &gradeexecute);
        ~Form();
        Form(const Form &orginal);
        Form& operator=(const Form &orginal);
        const std::string getName() const;
        int     getGradetosign() const;
        int getGradeexecute() const;
        bool    getSigned() const;
        void    beSigned(const Bureaucrat& b);
        
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
    std::ostream& operator<<(std::ostream& out, const Form& orginal);

#endif