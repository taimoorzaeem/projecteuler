/*
    Problem 1:

    If we list all the natural numbers below 10 that are multiples of 3 or 5, 
    we get 3, 5, 6 and 9. The sum of these multiples is 23.
    Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include<iostream>

int main() {
    /* Loop 1:
        1000/3 = 333
        
       Loop 2:
        1000/5 = 200

        Total iterations = 533
        Hence, more efficient
    */
    long sum = 0;
    for (int i = 3; i < 1000; i+=3) {
        sum += i;
    }

    for (int i = 5; i < 1000; i+=5) {
        /* If also divisble by 3 then next*/
        if (i % 3 == 0) continue;
        sum += i;
    }


    std::cout << sum << std::endl;
    return 0;
}