/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:13:03 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/08 14:13:03 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

 int main()
 {
     Array<int>   intArray;
     Array<int>   p(5);
     Array<int>   k(p);
     Array<int>   t = k;

   
     for (size_t i = 0; i < intArray.size(); i++) {
         std::cout << "Element at index " << i << ": " << intArray[i] << std::endl;
     }

     Array<double>    doubleArray;
     Array<double>    r(3);
     Array<double>    s(r);
     Array<double>    j =    s;

     for (size_t i = 0; i < doubleArray.size(); i++) 
     {
         std::cout << "Element at index " << i << ": " << doubleArray[i] << std::endl;
     }

     std::cout<<"exception " << std::endl;

    try
 	{
 		std::cout << intArray[10] << std::endl;
 	}
 	catch (std::exception &e)
 	{
 		std::cout << "10: " << e.what() << std::endl;
 	}

 	try
 	{
 		std::cout << intArray[-1] << std::endl;
 	}
 	catch (std::exception &e)
 	{
 		std::cout << "-1: " << e.what() << std::endl;
	}

     return 0;
 }

// #include <iostream>
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }