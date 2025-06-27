//
// Created by nambu on 26/06/2025.
//
#include <stdio.h>
int Sum1ToN(int n) {
    if (n == 0) {
        return 0;
    }
    return n + Sum1ToN(n - 1);
}
int main() {
    int value;
    int sum;
    do {
        printf("Enter a number: ");
        scanf("%d", &value);
        if (value <=0) {
            printf("ERORRR\n");
        }

        }while (value <= 0);
     sum = Sum1ToN(value);
    printf("Tong la %d\n", sum);
    return 0;
}

