//
// Created by nambu on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Nhap so luong phan tu cua mang");
    scanf("%d", &n);
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("khong the cap phat bo nho");
        return 1;
    }
    printf("Nhap phan tu cua mang \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int value;
    printf("Nhap gia tri can tim \n");
    scanf("%d", &value);

    int found = 0;
    printf("Gia tri %d xuat hien o cac vi tri :  ", value);
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("ERORRR");
    }
    free(arr);
    return 0;


}