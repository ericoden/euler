#include <iostream>
#include <cmath>
#include <chrono>

bool isPrime(long int x){
    if ((x % 2 == 0) || (x % 3 == 0)){
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
    clock_t start, end;
    start = clock();
    long int n = 600851475143;
    int result = 1;
    long double p = 1;
    long double q = n;
    while (result == 1){
        q = n / p;
        if (std::floor(q) == q){
            if (isPrime(q)){
                result = q;
            }
        }
        p += 1;
    }
    end = clock();
    printf ("Answer: %d \t Time: %0.3f seconds", 
            result, 
            ((float) end - start) / CLOCKS_PER_SEC);
    std::cout << std::endl;
}