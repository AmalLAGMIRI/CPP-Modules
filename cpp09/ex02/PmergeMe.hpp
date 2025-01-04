/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:02:50 by alagmiri          #+#    #+#             */
/*   Updated: 2024/03/09 15:02:50 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

// #include<exception>
// #include <climits>
// #include<iostream>
// #include<cstdlib>
// #include<vector>
#include <ctime>
#include <typeinfo>
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <deque>
#include <ctime>
 
int parse_argument(std::string str);
std::vector<int> fj(std::vector<int> vec);
void    sort_time(std::vector<int> myvec, std::deque<int> deque, char **argv, int argc);
std::deque<int> fj(std::deque<int> deq);

#endif