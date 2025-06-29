//
// Created by nambu on 26/06/2025.
//
//
// Created by nambu on 26/06/2025.
//
#include <stdio.h>
int Sum1ToN(int n) {
    if (n == 1) {
        return 1;
    }
    return n * Sum1ToN(n - 1);
}
int main() {
    int value;
    int giaithua;
    do {
        printf("Enter a number: ");
        scanf("%d", &value);
        if (value <0) {
            printf("ERORRR\n");
        }

    }while (value < 0);
     giaithua=Sum1ToN(value);
    printf("Giao thua la %d\n", giaithua);
    return 0;
}

