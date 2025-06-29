//
// Created by nambu on 26/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }else if (n == 1) {

        return 1;

    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    int n;
    printf("nhap so luong phan tu");
    scanf("%d", &n);
    if (n<=0) {
        printf("NOOOO");
    }
    int *fiboAci=(int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
       fiboAci[i]= fibonacci(i);
    }
    printf("Day fibonacy dao nguoc :[");
    for (int i = n-1; i >=0; i--) {
        printf(" %d", fiboAci[i]);
        if (i >0) {
            printf(", ");
        }

    }
    printf("]\n");
    free(fiboAci);
    return 0;
}