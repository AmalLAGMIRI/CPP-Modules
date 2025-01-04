/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:02:39 by alagmiri          #+#    #+#             */
/*   Updated: 2024/03/09 15:02:39 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sstream>
#include <deque>
#include <iomanip>

int parse_argument(std::string str)
{
    int num;
    std::stringstream ss;
    ss << str;
    if (!(ss >> num))
        throw std::runtime_error("error");
    if (num < 0 || (ss >> str))
        throw std::runtime_error("error");
    return num;
}

std::deque<int> fj(std::deque<int> deq)
{
        if (deq.size() <= 1)
                return deq;
        std::deque<std::pair<int,int> > deq_pair;
        for (std::deque<int>::iterator it1 = deq.begin(), it2 = deq.begin() + 1; it1 != deq.end() && it2 != deq.end(); it1 += 2 , it2 += 2)
                deq_pair.push_back(std::make_pair(*it1, *it2));
      
        for (std::deque<std::pair<int, int> >::iterator it = deq_pair.begin(); it != deq_pair.end(); it ++)
        {
                if (it->first < it->second)
                {
                        int tmp = it->first;
                        it->first = it->second;
                        it->second = tmp;     
                }
        }

        // for (std::deque<std::pair<int, int> >::iterator it = deq_pair.begin(); it != deq_pair.end(); it ++)
        //         std::cout <<  it->first << " " << it->second << std::endl;

        std::deque<int> greater, lowers;
        for (std::deque<std::pair<int, int> >::iterator it = deq_pair.begin(); it != deq_pair.end(); it ++)
        {
                greater.push_back(it->first);
                lowers.push_back(it->second);
        }

        
        if (deq.size() % 2)
                lowers.push_back(deq.back()); 
        
        // for (std::deque<int>::iterator it = greater.begin(); it != greater.end(); it ++)
        //         std::cout << *it << " ";

        // std::cout << "b" << std::endl; 

        greater = fj(greater);

        // for (std::deque<int>::iterator it = greater.begin(); it != greater.end(); it++)
        //         std::cout << *it << " ";

        // std::cout << "a" << std::endl; 
        while (lowers.empty() == false)
        {
                greater.insert(std::lower_bound(greater.begin(), greater.end(), lowers.back()), lowers.back());
                lowers.pop_back();
        }

        // for (std::deque<int>::iterator it = greater.begin(); it != greater.end(); it ++)
        //         std::cout << *it << " ";


        // std::cout << "end" << std::endl;

        return greater;
}

std::vector<int> fj(std::vector<int> vec)
{
        if (vec.size() <= 1)
                return vec;
        std::vector<std::pair<int,int> > fac_p;
        // ETAP 1 vec_pair 
        for (std::vector<int>::iterator it1 = vec.begin(), it2 = vec.begin() + 1; it1 != vec.end() && it2 != vec.end(); it1 += 2 , it2 += 2)
                fac_p.push_back(std::make_pair(*it1, *it2)); 
        // ETAP 2 => swap pair
        for (std::vector<std::pair<int, int> >::iterator it = fac_p.begin(); it != fac_p.end(); it ++)
        {
                if (it->first < it->second)
                {
                        int tmp = it->first;
                        it->first = it->second;
                        it->second = tmp;     
                }
        }
        // PRINT IN PAIR
        // for (std::vector<std::pair<int, int> >::iterator it = fac_p.begin(); it != fac_p.end(); it ++)
        //         std::cout <<  it->first << " " << it->second << std::endl;

        //  Etap 3
        std::vector<int> greater, lowers;
        for (std::vector<std::pair<int, int> >::iterator it = fac_p.begin(); it != fac_p.end(); it ++)
        {
                greater.push_back(it->first);
                lowers.push_back(it->second);
        }
        // Etap 4
        if (vec.size() % 2)
                lowers.push_back(vec.back()); 
        
        // for (std::vector<int>::iterator it = greater.begin(); it != greater.end(); it ++)
        //         std::cout << *it << " ";

        // std::cout << "b" << std::endl; 

        greater = fj(greater); // Etap 5

        // for (std::vector<int>::iterator it = greater.begin(); it != greater.end(); it ++)
        //         std::cout << *it << " ";
        // std::cout << "a" << std::endl; 
        //Etap6
        while (lowers.empty() == false)
        {
                greater.insert(std::lower_bound(greater.begin(), greater.end(), lowers.back()), lowers.back());
                lowers.pop_back();
        }

        // for (std::vector<int>::iterator it = greater.begin(); it != greater.end(); it ++)
        //         std::cout << *it << " ";

        // std::cout << "end" << std::endl;

        return greater;
}

void    sort_time(std::vector<int> myvec, std::deque<int> deque, char **argv, int argc)
{
    std::vector<int>    Nbrsort;
    std::deque<int>    Nbrs;
    std::vector<int>::iterator it;
    clock_t start, end;  // processor time consumed by the program since the beginning of its execution.
    double  time_vec;
    double time_deq;
    start = clock();
        for (int i = 1; i < argc ; i++)
                myvec.push_back(parse_argument(argv[i]));  
    Nbrsort = fj(myvec);
    end = clock();
    time_vec = static_cast<double>(end - start) / CLOCKS_PER_SEC;  

    start = clock();
        for (int i = 1; i < argc ; i++)
                deque.push_back(parse_argument(argv[i]));  
    Nbrs =fj(deque);
    end = clock();
    time_deq = static_cast<double>(end - start) / CLOCKS_PER_SEC; // seconde
        
        std::cout << "Before:   ";
    for (it = myvec.begin();it != myvec.end();it++)
        std::cout << ' ' << *it;
    std::cout << std::endl;
    
    
        std::cout << "After:    ";
    for (it = Nbrsort.begin();it != Nbrsort.end();it++)
        std::cout << ' ' << *it;

    std::cout << std::endl;
    std::cout << "Time to process a range of " << myvec.size() << " elements with std::vector : ";
    std::cout << std::fixed << std::setprecision(6) << time_vec << " s" << std::endl; // fixed and setprecision =>flotingpoint
    std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : ";
    std::cout << std::fixed << std::setprecision(6) << time_deq << " s" << std::endl;
}