#include<iostream>

int main() {
    long sum;
    long i = 1;
    long j = 2;
    long k = 0;
    while (i <= 4000000) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
        k = i + j;
        i = j;
        j = k;
    }

    std::cout << sum << std::endl;
}