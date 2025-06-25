//
// Created by nambu on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int k;
    printf("Nhap so can tim");
    scanf("%d", &k);
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        if(arr[i]==k) {
            printf(" Vị trí của %d la %d",k,i);
            return 0;
        }

    }

}