/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:27:36 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/07 12:27:36 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{

//     //<amal>
//     int a;
//     int b;

//     a = 5;
//     b = 10;
//     int result;

//     std::cout<< a << " "<< b <<std::endl;
//     swap<int>(a,b);
//     std::cout<< a << " - " << b <<std::endl;
//     result = min<int>(a,b);
//     std::cout << a <<std::endl;
//     std::cout << b << std::endl;
//     std::cout << "the main value is " << result << std::endl;

//     result = max<int>(a,b);
//     std::cout << a <<std::endl;
//     std::cout << b << std::endl;
//     std::cout << "the max value is " << result << std::endl;

//     char c = 'c' , k= 'k';
//     std::cout << c << " - " << k << std::endl;
//     swap<char>(c,k);
//     std::cout << c << " - " << k << std::endl;

//     result = min<char>(c,k);
//     std::cout << c <<std::endl;
//     std::cout << k << std::endl;
//     std::cout << "the main value is " << result << std::endl;

//     result = max<char>(c,k);
//     std::cout << c <<std::endl;
//     std::cout << "the max value is " << result << std::endl;
//     std::cout << k << std::endl;

    //<subject>
    
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;                
    return 0;


}

    

  