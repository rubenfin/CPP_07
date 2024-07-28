/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 14:08:48 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/28 15:14:53 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template<typename T>
Array<T>::Array() : array(nullptr), len(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : array(new T[n]()),len(n)
{
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        if (this->array)
            delete []this->array;
        this->array = new T[other.len];
        for (unsigned int i = 0; i < other.len; i++)
            array[i] = other.array[i];
        this->len = other.len;       
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](int idx) {
    if (idx < 0 || static_cast<unsigned int>(idx) >= len)
        throw std::out_of_range("Index out of bounds");
    
    return array[idx];
}

template<typename T>
const T& Array<T>::operator[](int idx) const {
    if (idx < 0 || static_cast<unsigned int>(idx) >= len)
        throw std::out_of_range("Index out of bounds");
    
    return array[idx];
}

template<typename T>
Array<T>::Array(const Array &other) : array(nullptr), len(0) 
{
    *this = other;
}

template<typename T>
unsigned int Array<T>::size()
{
    return (len);
}

template<typename T>
Array<T>::~Array()
{
    delete []array;
}
