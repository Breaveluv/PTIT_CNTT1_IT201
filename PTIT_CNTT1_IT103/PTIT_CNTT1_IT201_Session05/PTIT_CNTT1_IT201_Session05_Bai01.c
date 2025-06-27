//
// Created by nambu on 26/06/2025.
//
#include <stdio.h>

void print2ToRecursion(int n) {
    if (n == 1) {
        printf("%d\n", n);
        return;
    }

    print2ToRecursion(n-1);
    printf("%d\n",n);
}


int main(void) {
    print2ToRecursion(5);
    return 0;

}