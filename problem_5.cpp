/* 2520 is the smallest number that can be divided by each of the numbers from 
1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the 
numbers from 1 to 20?
*/

#include <iostream>
#include <cmath>

int GetMinEvenlyDivisible(int n) {
    bool flag = false;
    int i = 1;
    int k = 1;
    while (flag == false) {
        k = 1;
        flag = true;
        while (k <= n && flag == true) {
            if (((long double) i)/k != std::floor(i/k)) {
                flag = false;
            }
            else
            {
                k++;
            }
        }
        if (flag == false) {
            i++;
        }
    }
    return i;
}


int main () {
    int input;
    std::cout << "Enter a positive integer: ";
    std::cin >> input;
    int result = GetMinEvenlyDivisible(input);
    std::cout << "The smallest number evenly divisible by all numbers from 1 " \
        << "to " << input << " is " << result << std::endl;
}