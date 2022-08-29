/*
    Problem 5: Smallest Multiple
    
    2520 is the smallest number that can be divided by each of the numbers from 
    1 to 10 without any remainder. What is the smallest positive number that 
    is evenly divisible by all of the numbers from 1 to 20?

*/

#include<iostream>

int main() {
    long i = 20;

    bool flag;
    
    while(1) { // Assume there must be a number that has given properties
        flag = false;
        for (int j = 20; j > 0; j--) {
            if (i % j != 0) {
                flag = true;
                break;
            }
        }
        if (flag) i += 20;
        else break;
    }

    std::cout << i << std::endl;
    return 0;
}