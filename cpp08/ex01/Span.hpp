/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:06:22 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/20 13:06:22 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include<iostream>
#include<algorithm>

class Span
{
    private:
        unsigned int  N_max;
        std::vector<int> _vec;
    public:
        Span(unsigned int N);
        Span();
        Span(const Span &orginal);
        Span& operator=(const Span &orginal);
        ~Span();
        unsigned int		size() const;
		unsigned int		longestSpan();
        unsigned int shortestSpan();
        unsigned int getN_max();
        void  addNumber(unsigned int N);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
#endif