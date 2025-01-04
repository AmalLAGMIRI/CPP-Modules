/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:02:18 by alagmiri          #+#    #+#             */
/*   Updated: 2024/03/09 15:02:18 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <utility>
#include <deque>

int main(int argc , char **argv)
{
        if (argc < 2)
        {
           std::cout << "not valid argument" << std::endl;
        }
        try{
           std::vector<int> myvec;
           std::deque<int> deque;
        sort_time(myvec, deque, argv, argc);
        }catch(std::exception &e)
        {
                std::cout<< e.what() << std::endl;
        } 
}