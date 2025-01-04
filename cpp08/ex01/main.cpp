/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:05:16 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/20 13:05:16 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    Span sp = Span(7);
try
{
    sp.addNumber(5);
    sp.addNumber(1);
    sp.addNumber(4);
    sp.addNumber(10);
    sp.addNumber(6); 
    sp.addNumber(3);
    sp.addNumber(2);     
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}

std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

try {
    
    int arr[] = {4, 7, 8, 10, 5, 0, 2};
    std::vector<int> t(&arr[0], &arr[6]);
    Span s(1);
    s.addNumber(t.begin(), t.end()); 
    std::cout << s.shortestSpan() << std::endl;
    std::cout << s.longestSpan() << std::endl;
}
catch (std::overflow_error &e)
{
      std::cout  << e.what() << std::endl;
}

}