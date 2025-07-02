//
// Created by nambu on 02/07/2025.
//
#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }

    }
    return -1;
}
int main() {
    int n;
    int *arr;
    int target;
    int result;
    do {
        printf("Enter length of array: ");
        scanf("%d", &n);
        if (n<=0||n>1000) {
            printf("ERORR INPUT INVALID INPUT\n");
        }
    }while (n<=0||n>1000);
    arr = (int*)malloc(n*sizeof(int));
    printf("Nhap cac phan tu cua mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Gia tri can tim: ");
    scanf("%d", &target);
    result = linearSearch(arr, n, target);
    if (result == -1) {
       
         printf("Khong tim thay ");
    }else {
        printf("Tim thay phan tu %d tai vi tri %d",target,result);
    }
    free(arr);
    return 0;
}
