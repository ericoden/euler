#include <iostream>

int main() {
    int n = 4000000;
    int result = 0;
    int temp = 0;
    int fib_0 = 1;
    int fib_1 = 2;
    result = 2;
    while (fib_0 + fib_1 < n){
        temp = fib_0 + fib_1;
        if (temp % 2 == 0){
            result += temp;
        }
        fib_0 = fib_1;
        fib_1 = temp;
    }
    std::cout << "Answer:" << result << std::endl;

    return 0;
}