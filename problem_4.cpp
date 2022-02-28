/*
A palindromic number reads the same both ways. The largest palindrome made from 
the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
#include <string>
#include <cmath>

bool isPalindromic (int n) {
    std::string s = std::to_string(n);
    int len = s.length();
    int k = std::floor(len / 2);
    for (int i = 0; i <= k; i++) {
        if (s[i] != s[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int i = 999;
    int j = 999;
    int i_star = -1;
    int j_star = -1;
    int result = -1;
    int product = -1;
    while (i > 99) {
        while (j > 99) {
            if (isPalindromic(i * j)){
                product = i * j;
                if (product > result) {
                    result = product;
                    i_star = i;
                    j_star = j;
                }
            }
            j--;
        }
        i--;
        j = 999;
    }
    std::cout << i_star << " * " << j_star << " = " << result << std::endl;
    return 0;
}