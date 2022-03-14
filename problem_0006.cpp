/*
The sum of the squares of the first ten natural numbers is,
1 ^ 2 + 2 ^ 2 + ... + 10 ^ 2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10) ^ 2 = 55 ^ 2 = 3025
Hence the difference between the sum of the squares of the first ten natural 
numbers and the square of the sum is .
3025 - 385 = 2640
Find the difference between the sum of the squares of the first one hundred 
natural numbers and the square of the sum.
*/

/* Observe the difference is 2 times the sum of all pairwise products in the 
set {1, 2, ..., 100} (4950 such terms) */

#include <iostream>

int main () {
    int input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    int result = 0;
    for (int i = 1; i <= input; i++) {
        for (int j = i + 1; j <= input; j++) {
            result += i * j;
        }
    }
    result *= 2;
    std::cout << result << std::endl;
}