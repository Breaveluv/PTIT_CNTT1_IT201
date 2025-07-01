#include <stdlib.h>
#include <stdio.h>
void insertionSort(int arr[], int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
        printf("Enter number : ");
        scanf("%d", &n);
        if (n <= 0|| n >= 1000) {
            printf("Invalid Input\n");
        }
    }while (n <= 0 || n >= 1000);
    arr = (int*)malloc(n * sizeof(int));
    printf("Nhap cac phan tu");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]",i);
        scanf("%d", &arr[i]);
    }
    printf("\n Mang ban dau \n");
    printArray(arr, n);
    insertionSort(arr, n);
    printf("Mang sau khi sx");
    printArray(arr, n);
    free(arr);
    return 0;
}