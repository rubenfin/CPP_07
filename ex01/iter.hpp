/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/27 15:58:14 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/13 17:20:27 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <array>
#include <cstddef>

template <typename T, typename F>
void iter(T *address, size_t len, F function)
{
    for (size_t i = 0; i < len; ++i)
        function(address[i]);
}

