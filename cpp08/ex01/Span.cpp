/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:05:44 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/20 13:05:44 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    std::cout<<"constrctor par defaut" << std::endl;
    this->N_max = 0;
}

Span::Span(unsigned int N)
{
    std::cout << "constractor parametrize "<< std::endl;
    this->N_max = N;
}

Span::Span(const Span &orginal)
{
    *this = orginal;
    std::cout << "constractor par copier" << std::endl;
}

Span &Span::operator=(const Span &orginal)
{
    std::cout << "opeartor assinment" << std::endl;
    if (this != &orginal)
    {
        this->N_max = orginal.N_max;
        this->_vec= orginal._vec;
    }

    return *this;   
}

unsigned int Span::getN_max()
{
    return (this->N_max);
}

unsigned int		Span::size() const
{
	return (this->_vec.size());
}

void  Span::addNumber(unsigned int N)
{
    if (this->_vec.size() == this->N_max) 
        throw  std::overflow_error("there are already N elements stored");
    this->_vec.push_back(N);
    std::sort(this->_vec.begin() , this->_vec.end());
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    unsigned int diff = end - begin;
    if (end < begin || diff > this->N_max || this->_vec.size()  > this->N_max - diff) 
        throw std::overflow_error("More space");
    _vec.insert(_vec.end(), begin,  end);
    std::sort(this->_vec.begin() , this->_vec.end());
}

unsigned int Span::shortestSpan() 
{
    if (_vec.size() < 2) 
        throw std::runtime_error("Span contains less than two elements");

    unsigned int  shortspan = _vec[1] - _vec[0];
    for (size_t i = 2; i < _vec.size(); i++)
    {
        unsigned int span = _vec[i] - _vec[i - 1];
        shortspan = std::min(shortspan, span); 
    }
    return shortspan;
}

unsigned int Span::longestSpan()
{
    if(_vec.size() < 2)
        throw std::logic_error("Not number a span");

    return (_vec.back() - _vec.front());
}

Span::~Span()
{
    std::cout<< "Destrctor"<< std::endl;
}
