/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:56:09 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/20 12:56:09 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int main() {

    try {
        
        std::vector<int> vec;
        
        vec.push_back(1);
        vec.push_back(6);
        vec.push_back(6);
        vec.push_back(4);
        vec.push_back(5);
        vec.push_back(16);
        vec.push_back(20);
        vec.push_back(5);
        vec.push_back(2);
        vec.push_back(7);
        
        easyfind(vec, 6); 
    } catch (const std::runtime_error &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}