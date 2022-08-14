/*
    Problem 14: Longest Collatz Sequence

*/
#include<iostream>

int main() {
    
    long term = 0;
    long count = 0;
    long largest_count = 0;
    int term_with_largest_count = 0;
    for (int i = 13; i < 1000000; i++) {

        term = i;
        count = 0;
        while (term != 1) {
        
            if (term % 2 ==  0) {
                term = term/2;
            } else {
                term = (3*term)+1;
            }
            count++;
        }
        if (count > largest_count) {
            largest_count = count;
            term_with_largest_count = i;
        }


    }
    
    std::cout << "Number: " << term_with_largest_count << std::endl;
    std::cout << "Terms: " << largest_count <<std::endl;
    return 0;
}
