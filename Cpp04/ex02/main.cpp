/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:39:27 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 15:09:42 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    
    const int arraySize = 10;
    
    Animal* animals[arraySize];
    
    for (int i = 0; i < arraySize; ++i) {
        animals[i] = new Dog();
    }
    
    for (int i = arraySize; i < arraySize; ++i) {
        animals[i] = new Cat();
    }
    for (int i = 0; i < arraySize; ++i) {
        delete animals[i];
    }

    return 0;
}