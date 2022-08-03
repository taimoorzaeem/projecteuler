/*
    Problem 9: Pythagorean triplet
    
*/
#include<iostream>

int main() {

    long lhs = 0;
    long rhs = 0;

    bool flag = false;
    int c = 0, b = 0, a = 0;

    /* we start from 333 since a < b < c and a+b+c == 1000
        which means that c cannot be any less than 333 */
    /**  This algorithm runs in O(n^3) */
    for (c = 333; c <= 999; c++) { 
        for (b = 1; b <= c; b++) {
            for (a = 1; a <= b; a++) {
                lhs = (a*a) + (b*b);
                rhs = c*c;
                if (lhs == rhs && a+b+c == 1000) {
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
        if (flag) break;
    }
    std::cout << "a: " << a << " b: " << b << 
                " c: " << c << std::endl;
    std::cout << "Product a*b*c: " << a*b*c << std::endl;
    return 0;
}