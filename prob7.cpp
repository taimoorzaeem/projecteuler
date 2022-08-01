/*
    Problem 7: 10001th Prime
    
*/

#include<iostream>
#include<math.h>

bool is_prime(long num) {
    for (long i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {

    int count = 0;

    long num = 2;

    while (count < 10001) {
        if (is_prime(num)) count++;
        num++;
    }

    std::cout << --num << std::endl;
    return 0;
}