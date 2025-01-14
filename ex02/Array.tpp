/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 14:08:48 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/18 12:57:21 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

template<typename T>
Array<T>::Array() : _array(nullptr), _len(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()),_len(n)
{
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        if (this->_array)
            delete []this->_array;
        this->_array = new T[other._len];
        for (unsigned int i = 0; i < other._len; i++)
            _array[i] = other._array[i];
        this->_len = other._len;       
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](int idx) {
    if (idx < 0 || static_cast<unsigned int>(idx) >= _len)
        throw std::out_of_range("Index out of bounds");
    return _array[idx];
}

template<typename T>
const T& Array<T>::operator[](int idx) const {
    if (idx < 0 || static_cast<unsigned int>(idx) >= _len)
        throw std::out_of_range("Index out of bounds");
    
    return _array[idx];
}

template<typename T>
Array<T>::Array(const Array &other) : _array(nullptr), _len(0) 
{
    *this = other;
}

template<typename T>
unsigned int Array<T>::size() const
{
    return (_len);
}

template<typename T>
Array<T>::~Array()
{
    delete [] _array;
}
