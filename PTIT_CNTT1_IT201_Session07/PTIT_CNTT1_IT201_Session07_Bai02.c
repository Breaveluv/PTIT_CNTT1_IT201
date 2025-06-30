#include <stdio.h>
#include <stdlib.h>

// Hàm hoán đổi hai phần tử
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp chọn (Selection Sort)
void selectionSort(int *arr, int n) {
    int minIndex;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

// Hàm in mảng
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int *arr;

    // Nhập số lượng phần tử
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);

    // Kiểm tra điều kiện n
    if (n <= 0 || n >= 1000) {
        printf("Số lượng phần tử không hợp lệ (0 < n < 1000).\n");
        return 1;
    }

    // Cấp phát động cho mảng
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Không thể cấp phát bộ nhớ.\n");
        return 1;
    }

    // Nhập phần tử
    printf("Nhập %d phần tử:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // In mảng trước khi sắp xếp
    printf("before: ");
    printArray(arr, n);

    // Gọi hàm sắp xếp chọn
    selectionSort(arr, n);

    // In mảng sau khi sắp xếp
    printf("after: ");
    printArray(arr, n);

    // Giải phóng bộ nhớ
    free(arr);

    return 0;
}
