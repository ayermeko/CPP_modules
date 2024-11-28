/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:00:47 by ayermeko          #+#    #+#             */
/*   Updated: 2024/11/28 09:24:30 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int& x) {
    ++x;
}

template<typename T>
void printElement(const T& elem) {
    std::cout << elem << " ";
}

void capitalize(char& c) {
    if (c >= 'a' && c <= 'z')
        c = c - ('a' - 'A');
}

void appendSuffix(std::string& str) {
    str += "_suffix";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intSize = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original integer array: ";
    iter(intArray, intSize, printElement<int>);
    std::cout << "\nAfter incrementing each element: ";
    iter(intArray, intSize, increment);
    iter(intArray, intSize, printElement<int>);
    std::cout << "\n\n";

    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    size_t charSize = sizeof(charArray) / sizeof(charArray[0]);

    std::cout << "Original char array: ";
    iter(charArray, charSize, printElement<char>);
    std::cout << "\nAfter capitalizing each character: ";
    iter(charArray, charSize, capitalize);
    iter(charArray, charSize, printElement<char>);
    std::cout << "\n\n";

    std::string strArray[] = {"apple", "banana", "cherry", "date", "elderberry"};
    size_t strSize = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "Original string array: ";
    iter(strArray, strSize, printElement<std::string>);
    std::cout << "\nAfter appending a suffix to each string: ";
    iter(strArray, strSize, appendSuffix);
    iter(strArray, strSize, printElement<std::string>);
    std::cout << "\n";

    return 0;
}
