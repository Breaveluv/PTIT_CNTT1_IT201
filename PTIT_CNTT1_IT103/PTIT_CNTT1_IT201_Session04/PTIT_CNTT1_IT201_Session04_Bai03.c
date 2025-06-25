//
// Created by nambu on 17/06/2025.
//
#include <stdio.h>
int main () {
    int n;
    int arr[100];
    printf("Nhap so phan tu cua mang 0 < n<=100");
    scanf("%d",&n);
    if (n<=0||n>100) {
        printf("Phan tu khong hợp lệ");
        return 1;

    }
    printf("Nhập %d phan tu :\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);

    }
    int min = arr[0];
    int k=0;
    for (int i=0;i<n;i++) {
        if (arr[i]<min) {
            min = arr [i];
            k=i;
        }
    }
    printf(" Phần tử nhỏ nhất nhất của mảng là %d\n tại vị trí %d",min,k);
    return 0;
}

