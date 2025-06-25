//
// Created by nambu on 17/06/2025.
//
#include <stdio.h>
int main () {
    int n;
    int arr[100];
    prinft("Nhap so phan tu cua mang 0 < n<=100");
    scanf("%d",&n);
    if (n<=0||n>100) {
        printf("Phan tu khong hợp lệ");
        return 1;

    }
    printf("Nhập %d phan tu :\n",n);
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);

    }
    int max = arr[0];
    for (int i=0;i<n;i++) {
        if (arr[i]>max) {
            max = arr [i];
        }
    }
    printf(" Phần tử lớn nhất của mảng là %d\n",max);
    return 0;
}

