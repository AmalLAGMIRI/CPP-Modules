/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:19:00 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/05 19:19:00 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Base* generate()
{
    uint random;
    std::srand(std::time(0));
    random = rand() % 3;
    if(random == 0)
        return new A();
    if(random == 1)
        return new B();
    if(random == 2)
        return new C();
    
    return (NULL);  
}


void identify(Base* p)
{
    std::cout<<"Ptr" <<std::endl;
    if(dynamic_cast<A*>(p))
    {
        std::cout<<"A" <<std::endl;
        return ;
    }
    if(dynamic_cast<B*>(p))
    {
        std::cout<<"B" <<std::endl;
        return ;
    }
    if(dynamic_cast<C*>(p))
        std::cout <<"C" << std::endl;   

}

void identify(Base& p)
{
    
    std::cout<< "REF" <<std::endl;
    try{
        A &ref = dynamic_cast<A&>(p);
         std::cout<< "A"  << &ref <<std::endl;
    }catch(std::exception &e){

        try{
            B &ref = dynamic_cast<B&>(p);
            std::cout<< "B"  << &ref <<std::endl;
        }catch(std::exception &e){

            try{
                C &ref = dynamic_cast<C&>(p);
                std::cout<< "C"   << &ref <<std::endl;
            }catch(std::exception &e){
                std::cerr << "Caught bad_cast: " << e.what() << std::endl;
            }
        }

    }
}

int main()
{

    Base* obj1;

    obj1 = generate();
    identify(obj1);
    identify(*obj1);
    delete obj1;

    obj1 = generate();
    identify(obj1);
    identify(*obj1);
    delete obj1;
}