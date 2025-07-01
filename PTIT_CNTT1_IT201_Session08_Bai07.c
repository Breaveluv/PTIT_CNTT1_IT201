#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int *arr, int low, int high) {
    int pivot = arr[low];
    int i = (low-1);
    for (int j = low; j <= high-1; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}
void quickSort(int *arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(int *arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d, ", arr[i]);
        if (i<(size-1)) {
            printf(", ");
        }
    }
    printf("]\n");
}
int main() {
    int n;
    int *arr;
    printf("\n  InPut \n: ");
    scanf("%d", &n);
    if (n<=0||n>=1000) {
        printf("ERORR");
        return 0;
    }
    arr = (int*)malloc(n*sizeof(int));
    printf("[");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n-1);
    printf("HEHE");
    printArray(arr, n);
    free(arr);
    return 0;
}