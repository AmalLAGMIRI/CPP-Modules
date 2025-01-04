/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:29:11 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/07 12:29:11 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{

    std::cout<<"integer array" <<std::endl;
    int array[] = {1, 2, 3, 4, 5};
    std::cout <<sizeof(array) <<std::endl;
    int arrayLength = sizeof(array) / sizeof(int);
    std::cout<< "integer array : ";
    iter(array, arrayLength, Afficher<int>);
    std::cout<< std::endl;

    std::cout<<"Double array" <<std::endl;
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int  doubleArrayLength = sizeof(doubleArray) / sizeof(double);
    std::cout <<sizeof(doubleArray) <<std::endl;
    std::cout<< "Double array : ";
    iter(doubleArray, doubleArrayLength, Afficher<double>);
    std::cout << std::endl;

    std::cout<< "charArray" <<std::endl;
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    int  charArrayLength = sizeof(charArray) / sizeof(char);
    std::cout <<sizeof(charArray)<<std::endl;
    std::cout<< "char array : ";
    iter(charArray, charArrayLength, Afficher<char>);
    std::cout<<std::endl;

  
}
