/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 11:49:01 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/01 13:15:39 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Animal.hpp"

#include <iostream>
#include <string>
#include "Animal.hpp"

#ifndef CAT_H
#define CAT_H

class Cat : public Animal
{
    public :
    Cat();
    Cat    (const Cat& orginal);
    Cat&    operator=(const Cat& orginal);
    void    makeSound(void) const;
    ~Cat();
};

#endif