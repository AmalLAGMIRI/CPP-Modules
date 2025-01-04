/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:25:50 by alagmiri          #+#    #+#             */
/*   Updated: 2024/03/06 19:25:50 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc,char **argv)
{
    if (argc != 2)
    {
        std::cout<< "Not valid argument" << std::endl;
        return (1);
    }
    
    Rev_Notation(argv[1]);

    return 0;
}
