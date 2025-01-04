/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:19:47 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 21:19:47 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include<string>
#include<iostream>
#include <exception>
#include <fstream>
#include "AForm.hpp"
#include <cstdlib> 
#include <ctime> 
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private:
    std::string target;
public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &orginal);
        RobotomyRequestForm& operator=(const RobotomyRequestForm &orginal);
        std::string		getTarget();
        ~RobotomyRequestForm();
        void execute(const Bureaucrat &execute) const;
};

#endif
