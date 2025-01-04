/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:05:52 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 21:05:52 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include<string>
#include<iostream>
#include <exception>
#include <fstream>
#include "AForm.hpp"
class Bureaucrat;

class PresidentialPardonForm :public  AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &orginal);
        PresidentialPardonForm& operator=(const PresidentialPardonForm &orginal);
        std::string   getTarget();
        ~PresidentialPardonForm();
        void execute(const Bureaucrat &execute) const;
};

#endif