/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 14:08:51 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/28 15:14:37 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <string>
#include <iostream>

template <typename T>
class Array
{
private:
    T *array;
    unsigned int len;
public:
    Array();
    Array(unsigned int n);
    Array(const Array &other);
    Array& operator=(const Array &other);
    T& operator[](int idx);
    const T& operator[](int idx) const;
    ~Array();
    unsigned int size();
};

#include "Array.tpp"

#endif