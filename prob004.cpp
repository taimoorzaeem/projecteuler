/*
    Problem 4: Largest palindrome product
    
    A palindromic number reads the same both ways. The largest palindrome made 
    from the product of two 2-digit numbers is 9009 = 91 × 99.
    Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>

int main() {
    int num1 = 0;
    int num2 = 0;
    int largest_product = 0;
    for (int i = 100; i < 999; i++) {
        for (int j = 100; j < 999; j++) {
            int product = i*j;
            std::string product_string = std::to_string(product);
            std::string copy_string = product_string;
            std::reverse(copy_string.begin(), copy_string.end());

            if (!(strcmp(product_string.c_str(), copy_string.c_str()))) {
                if (product > largest_product) {
                    num1 = i;
                    num2 = j;
                    largest_product = product;
                }
            }
        }
    }
    std::cout << num1 << " * " << num2 << " = " << largest_product << std::endl;
    return 0;
}