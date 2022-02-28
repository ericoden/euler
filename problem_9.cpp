/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/

#include <iostream>
#include <cmath>

int main() {
    int a = 1;
    int b = 1;
    int c = 1;
    int result = 0;
    while (result == 0) {
        b = 1;
        while (result == 0 & b <= 1000) {
            c = 1000 - a - b;
            if (std::pow(a, 2) + std::pow(b, 2) == std::pow(c, 2)) {
                result = a * b * c;
            }
            b++;
        }
        a++;
    }
    std::cout << "Answer: " << a - 1 << " * " << b - 1 << " * " << c;
    std::cout << " = " << result << std::endl;
    return 0;
}