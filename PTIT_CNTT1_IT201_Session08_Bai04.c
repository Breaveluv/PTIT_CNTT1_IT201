//
// Created by nambu on 02/07/2025.
//
#include <stdlib.h>
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n) {
    int i, j, min;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        if (min != i) {
            swap(&arr[min], &arr[i]);
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n;
    int *arr;
    do {
        printf("Nhap so luong phan tu : ");
        scanf("%d", &n);
        if (n <= 0|| n >=1000) {
            printf("ERORR");
        }
    }while (n <= 0 || n >= 1000);
    arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Mang ban dau \n");
    printArray(arr, n);
    selectionSort(arr, n);
    printf("\n Mang sau khi sap xep \n");
    printArray(arr, n);
    free(arr);
    return 0;
}