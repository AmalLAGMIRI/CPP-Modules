/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:56:25 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 21:56:25 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include<string>
#include<iostream>
#include <exception>
#include <stdexcept>

class Bureaucrat;
class AForm
{
    private:
        const std::string name;
        bool _signed;
        const int gradetosign;
        const int gradeexecute;
    public:
        AForm();
        AForm(const std::string &name,const int &gradetosign,const int &gradeexecute);
        AForm(const AForm &orginal);
        AForm& operator=(const AForm &orginal);
        const std::string getName() const;
        int     getGradetosign() const;
        int getGradeexecute() const;
        bool    getSigned() const;
        void    beSigned(const Bureaucrat& b);
        virtual void execute(const Bureaucrat& executor) const = 0;
        void    executeForm(AForm const & form) const;
        virtual ~AForm();
        void		checkexecute(const Bureaucrat& executor) const;
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

std::ostream& operator<<(std::ostream& out, const AForm& orginal);

#endif