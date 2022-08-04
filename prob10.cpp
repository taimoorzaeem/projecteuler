/*
	Problem 10: Summation of primes

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
	long sum = 0;
	for (int i = 2; i < 2000000; i++) {
		if (is_prime(i)) {
			sum += i;
		}
	}

	std::cout << sum << std::endl;
	return 0;
}
	
