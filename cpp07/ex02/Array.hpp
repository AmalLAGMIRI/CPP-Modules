/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagmiri <alagmiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:12:49 by alagmiri          #+#    #+#             */
/*   Updated: 2024/02/08 14:12:49 by alagmiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include<exception>
template <typename T>

class Array
{
    private:
        T *data;
        unsigned int Size;
    public:
        Array();
        Array(unsigned int _size);
        Array(const Array &orginal);
        Array& operator=(const Array &orginal);
        T& operator[](unsigned int id);
        const T& operator[](unsigned int id) const ;
        unsigned int size() const;
        ~Array();
};

#endif

template <typename T>
Array<T> ::Array()
{
    std::cout<< "Default constrctor in Array" <<std::endl;
    data = NULL;
    Size = 0;
}

template<typename T>
Array<T>::Array(unsigned int nbr)
{
    std::cout<<"Parametrize Constrctor in Array " << std::endl;
    if (nbr)
        this->data = new T[nbr]();
    else
        this->data = NULL;
    Size = nbr;
}

template <typename T>
Array<T>::Array(const Array &orginal)
{
    std::cout<<"Constrctor par copier" <<std::endl;

    this->data = NULL;
    
    *this = orginal;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& orginal)
{
        if (this != &orginal)
        {
            delete[] this->data;
            
            if (orginal.Size)
	            this->data = new T[orginal.Size]();
	        else
                this->data = NULL;

            Size = orginal.Size;
            
            for (unsigned int i = 0; i < Size; i++)
		        this->data[i] = orginal.data[i];
        }
           
		return (*this);
}

template<typename T> 
T& Array<T>::operator[](unsigned int id)
{

    if (id >= Size)
        throw std::out_of_range("Index out of bounds");
    return (data[id]);
}

template<typename T> 
const T& Array<T>::operator[](unsigned int id) const 
{
    if (id >= Size)
        throw std::out_of_range("Index out of bounds");
    return (data[id]);
}

template<typename T>
unsigned int Array<T>::size() const
{
    return Size;
}

template <typename T>
Array<T>::~Array() {
    delete[] this->data;
}



