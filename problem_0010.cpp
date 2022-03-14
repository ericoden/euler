/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17

Find the sum of all the primes below two million */

#include <iostream>
#include <cmath>


bool isPrime(long int x) {
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
    double sqrt = std::sqrt(x);
    double sqrt_fl = std::floor(sqrt);
    int i = 5;
    do {
        if ((x % i == 0) || (x % (i + 2) == 0)){
            return false;
        }
        i += 6;
    } while (i <= sqrt_fl);
    return true;
}

long long int sumPrimesBelow(int n) {
    long long int result = 0;

    for (long int i = 0; i < n; i++) {
        if (isPrime(i)) {
            result += i;
        }
    }
    return result;
}


int main() {
    int input;
    std::cout << "Please enter a number: ";
    std::cin >> input;

    // range of int == range of long int == +/- 2^31 \approx 2 * 10 ^ 9
    // range of long long int = +/i 2^63 \approx 9 * 10 ^ 18
    long long int result = sumPrimesBelow(input);

    std::cout << "The sum of all the primes below " << input << " is ";
    std::cout << result << std::endl;
}