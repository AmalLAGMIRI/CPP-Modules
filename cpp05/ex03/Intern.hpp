/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:59:27 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 21:59:27 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &orginal);
        Intern& operator=(const Intern &orginal);
        AForm*  makeForm(const std::string& formName, const std::string& target);
        
        class  FormError:public std::exception
        {
                public:
                const char* what() const throw();
        };
};

#endif
