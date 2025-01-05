/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 10:08:25 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 12:58:11 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal *j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    std::cout << "\n Wrong Animal\n" << std::endl;
    WrongAnimal	*wrongAnimal = new WrongAnimal();
    WrongAnimal	*wrongCat = new WrongCat();
    std::cout << "\nWrongAnimal: ";
    wrongAnimal->makeSound();
    std::cout << "WrongCat: ";
    wrongCat->makeSound();
    std::cout << std::endl;
    delete wrongAnimal;
    delete wrongCat;

return 0;
}