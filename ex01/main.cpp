/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/27 15:58:18 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/12/13 17:40:20 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printArr(const T *array, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        std::cout << array[i];
        if (i < size - 1)
            std::cout << ", ";
    }
    std::cout << "\n" << std::endl;
}

void plusChar(char &c)
{
    c++;
}

void plusOne(int &n)
{
    n++;
}

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5}; 
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original int array: " << std::endl;
    printArr(arr, arrLength);

    ::iter(arr, arrLength, plusOne);
    std::cout << "PlusOne int array:" << std::endl;
    printArr(arr, arrLength);

    char str[6] = {"abcde"};
    int strLen = sizeof(str) / sizeof(str[0]) - 1;
    std::cout << "Original char array: "<< std::endl;
    printArr(str, strLen);

    ::iter(str, strLen, plusChar);
    std::cout << "PlusOne char array: " << std::endl;
    printArr(str, strLen);
    
    return (0);
}
