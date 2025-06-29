//
// Created by nambu on 30/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int findMax(int *arr,int n) {
    if(n==1) {
        return arr[0];

    }
    int max=findMax(arr,n-1);
    return (arr[n-1]>max)?arr[n-1]:max;
}
int findMin(int *arr,int n) {
    if(n==1) {
        return arr[0];
    }
    int min=findMin(arr,n-1);
    return (arr[n-1]>min)?arr[n-1]:min;
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    if(n<=0) {
        printf("Invalid Input");
        return 1;
    }
    int *arr = (int *)malloc(n*sizeof(int));
    printf("Nhap cac phan tu");
    for(int i=0;i<n;i++) {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    int max = findMax(arr,n);
    int min = findMin(arr,n);
    printf("Max = %d\nMin = %d\n",max,min);
    free(arr);
    return 0;
}
