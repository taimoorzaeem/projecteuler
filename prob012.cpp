/*
    Problem 12: Highly divisible triangular number

*/

#include<iostream>

int count_factors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int i = 1;
    long natural = 0;
    while (true) {
        natural += i;
        int factors = count_factors(natural);
        if (factors >= 500) {
            std::cout << natural << std::endl;
            break;
        }
        i++;
    }
    return 0;
}