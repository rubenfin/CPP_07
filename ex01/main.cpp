/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/27 15:58:18 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/28 13:17:33 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printT(T t)
{
    std::cout << t << std::endl;
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
    ::iter(arr, 5, plusOne);

    std::cout << "int array" << std::endl;
    for (int i = 0; i < 5; i++)
        printT(arr[i]);

    char str[6] = {"abcde"};
    ::iter(str, 5, plusChar);
    
    std::cout << "char array" << std::endl;
    printT(str);
        
    return (0);
}
