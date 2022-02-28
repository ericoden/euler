/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that 
the 6th prime is 13.

What is the 10,001st prime number?
*/

#include <iostream>
#include <cmath>


bool isPrime(long int x){
    if (x == 1) {
        return false;
    }
    if (x < 4) {
        return true;
    }
    if (x % 2 == 0){
        return false;
    }
    if (x < 9){
        return true;
    }
    if (x % 3 == 0){
        return false;
    }
    float sqrt = std::sqrt(x);
    float sqrt_fl = std::floor(sqrt);
    int i = 5;
    do {
        if ((x % i == 0) || (x % (i + 2) == 0)){
            return false;
        }
        i += 6;
    } while (i <= sqrt_fl);
    return true;
}

int main() {
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    int count = 0;
    int n = 1;
    while (count < input){
        if (isPrime(n)) {
            count++;
        }
        n++;
    }
    std::cout << "The " << input << "th prime is ";
    std::cout << n - 1 << std::endl;
}