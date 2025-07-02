#include <stdio.h>
#include <stdlib.h>


void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int linearSearch(int *arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i; 
    }
    return -1; 
}


int binarySearch(int *arr, int left, int right, int target) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

   
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cap phat bo nho that bai!\n");
        return 1;
    }

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    int target;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &target);
    int linearIndex = linearSearch(arr, n, target);
    if (linearIndex != -1)
        printf("Tim kiem tuyen tinh: Tim thay tai vi tri %d\n", linearIndex);
    else
        printf("Tim kiem tuyen tinh: Khong tim thay\n");

    
    insertionSort(arr, n);

   
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

 
    int binaryIndex = binarySearch(arr, 0, n - 1, target);
    if (binaryIndex != -1)
        printf("Tim kiem nhi phan: Tim thay tai vi tri %d\n", binaryIndex);
    else
        printf("Tim kiem nhi phan: Khong tim thay\n");

    free(arr);
    return 0;
}
