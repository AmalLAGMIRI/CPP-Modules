/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:38:53 by alagmiri          #+#    #+#             */
/*   Updated: 2024/01/08 15:00:45 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

#ifndef BRAIN_H
#define BRAIN_H

class Brain {
private:
    std::string		ideas[100];
public:
    Brain();
    Brain(const Brain& orginal);
    Brain& operator=(const Brain& orginal);
    ~Brain();
};

#endif