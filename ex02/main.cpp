/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rfinneru <rfinneru@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/07/28 14:08:57 by rfinneru      #+#    #+#                 */
/*   Updated: 2024/07/28 14:59:56 by rfinneru      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main() {
    try {
        // Default constructor
        Array<int> a;
        std::cout << "Size of a (default constructor): " << a.size() << std::endl;

        // Constructor with size
        Array<int> b(5);
        std::cout << "Size of b (constructor with size 5): " << b.size() << std::endl;

        // Assigning values to b
        for (unsigned int i = 0; i < b.size(); ++i) {
            b[i] = i * 2;
        }

        // Display elements of b
        std::cout << "Elements of b: ";
        for (unsigned int i = 0; i < b.size(); ++i) {
            std::cout << b[i] << " ";
        }
        std::cout << std::endl;

        // Copy constructor
        Array<int> c(b);
        std::cout << "Size of c (copy constructor): " << c.size() << std::endl;

        // Display elements of c
        std::cout << "Elements of c (copy of b): ";
        for (unsigned int i = 0; i < c.size(); ++i) {
            std::cout << c[i] << " ";
        }
        std::cout << std::endl;

        // Assignment operator
        a = b;
        std::cout << "Size of a (after assignment): " << a.size() << std::endl;

        // Modifying a should not affect b or c
        a[0] = 100;

        std::cout << "Elements of a (after modification): ";
        for (unsigned int i = 0; i < a.size(); ++i) {
            std::cout << a[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Elements of b (should remain unchanged): ";
        for (unsigned int i = 0; i < b.size(); ++i) {
            std::cout << b[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Elements of c (should remain unchanged): ";
        for (unsigned int i = 0; i < c.size(); ++i) {
            std::cout << c[i] << " ";
        }
        std::cout << std::endl;

        // Access out of bounds
        std::cout << "Trying to access out of bounds element: ";
        std::cout << a[10] << std::endl; // This should throw an exception

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}