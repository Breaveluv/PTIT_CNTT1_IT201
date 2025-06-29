//
// Created by nambu on 26/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int sum(int arr[], int n) {
    if (n==0) {
        return 0;
    }
    return arr[n-1] + sum(arr, n-1);

}
int main() {
    int n;
    printf("Nhap so luong phan tu ");
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int result = sum(arr, n);
    printf("Tong cac phan tu la %d",result);
    free(arr);
    return 0;
}