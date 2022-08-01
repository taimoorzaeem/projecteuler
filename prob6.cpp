#include<iostream>

int main() {

    long sum_of_squares = 0;
    long square_of_sums = 0;

    for (int i = 1; i <= 100; i++) {
        sum_of_squares += i*i;
        square_of_sums += i;
    }

    square_of_sums *= square_of_sums;

    std::cout << square_of_sums - sum_of_squares << std::endl;
}