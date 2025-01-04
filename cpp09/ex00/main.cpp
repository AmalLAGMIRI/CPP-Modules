/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:24:56 by alagmiri          #+#    #+#             */
/*   Updated: 2024/03/06 19:24:56 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int argc , char **argv)  
{
    if( argc != 2 || argv[1][0] == '\0')
    {
        std::cerr << argv[0] << " <input_file>"  << std::endl;
        return 1;
    }

    BitcoinExchange Bitcoin(argv[1]);

    // std::string t = "2020-2-1";
    // Bitcoin.Check_date_isvalid(t);
    // std::cout << t << std::endl;
   // Bitcoin.read_base();  
}

