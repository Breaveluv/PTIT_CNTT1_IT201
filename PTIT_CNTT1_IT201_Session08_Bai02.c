//
// Created by nambu on 02/07/2025.
//
# include <stdio.h>
# include <stdlib.h>
int binarySearch(int arr[], int l, int r, int x) {
    while (l<=r) {
        int mid = l + (r-l)/2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            r = mid - 1;
        }else {
            l = mid + 1;
        }

    }
    return -1;
}
int main() {
    int n;
    int *arr;
    int x;
    do {
        printf("Enter length of array: ");
        scanf("%d", &n);
        if (n<=0||n>1000) {
            printf("ERORR INPUT INVALID INPUT\n");
        }
    }while (n<=0||n>1000);
    arr = (int*)malloc(n*sizeof(int));
    printf("------- ");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim: \n");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n-1, x);
    printf("Ket qua la");
    if (result == -1) {
        printf("Khong tim thay: ");
    }else {
        printf("Tim thay gtri %d tai vi tri %d trong mang: ", x, result);

    }
    free(arr);
    return 0;
}