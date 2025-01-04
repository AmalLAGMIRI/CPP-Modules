/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:25:36 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 21:25:36 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include<string>
#include<iostream>
#include <exception>
#include <fstream>
#include "AForm.hpp"
class Bureaucrat;

 class ShrubberyCreationForm : public AForm
 {
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string  target);
        ShrubberyCreationForm(const ShrubberyCreationForm &orginal);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &orginal);
        std::string			getTarget();
        ~ShrubberyCreationForm();
        void execute(const Bureaucrat &execute) const;
 };
 
#endif
