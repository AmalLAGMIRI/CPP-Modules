/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:37:46 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 21:20:25 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    
  const int arraySize = 10;
    
  Animal* animals[arraySize];
    
  for (int i = 0; i < 5; ++i) {
        animals[i] = new Dog();
  }

  for (int i = 5; i < arraySize; ++i) {
        animals[i] = new Cat();
  }

  for (int i = 0; i < arraySize; ++i) {
        delete animals[i];
  }


//  for (int i = 0; i < 5; ++i) {
//         animals[i] = new Dog(Dog());
//   }

//   for (int i = 5; i < arraySize; ++i) {
//         animals[i] = new Cat(Cat());
//   }

//   for (int i = 0; i < arraySize; ++i) {
//         delete animals[i];
//   }
// {
// Dog a;
// Dog d;
// a = d;
// }
// {
// Cat a;
// Cat d;
// a = d;
// }
// system("leaks Brainn");
    return 0;
}