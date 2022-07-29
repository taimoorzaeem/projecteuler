/*
    Problem 3:
    
    The prime factors of 13195 are 5, 7, 13 and 29.
    What is the largest prime factor of the number 600851475143 ?

*/

#include<iostream>
#include<math.h>
#define TARGET 600851475143
bool is_prime(long num);

int main() {
    long largest_prime = 0;

    for (long i = 2; i < sqrt(TARGET); i++) 
        if (is_prime(i))
            if (TARGET % i == 0) 
                if (i > largest_prime) largest_prime = i;
            

    std::cout << largest_prime << std::endl;

    return 0;
}

bool is_prime(long num) {
    for (long i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}