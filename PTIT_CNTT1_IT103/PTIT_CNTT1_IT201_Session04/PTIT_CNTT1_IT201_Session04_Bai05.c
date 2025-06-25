//
// Created by nambu on 25/06/2025.
//
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int binarySearch(int arr[], int n, int x) {
    int low = 0;
    int high = n-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            return mid;
        }else if (arr[mid] < x) {
            low = mid + 1;
        }else {
            high = mid - 1;
        }
        return 0;
    }
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i );
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        printf("\n");

    }
int x;
    printf("Enter element to be search: ");
    scanf("%d", &x);
    if (binarySearch(arr, n, x)) {
        printf("Phần tử có trong mảng");
    }else {
        printf("Not found");
    }
    return 0;
}
