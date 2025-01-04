/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:29:19 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/21 14:29:19 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

    try
    {
        Bureaucrat bureaucrat1("John Doe", 5);
        Form form("FormA", 11, 30);

        // std::cout << bureaucrat1 << std::endl;
        // std::cout << form << std::endl;

        bureaucrat1.signForm(form);
        std::cout << bureaucrat1 << std::endl;
        form.beSigned(bureaucrat1);

    } catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
