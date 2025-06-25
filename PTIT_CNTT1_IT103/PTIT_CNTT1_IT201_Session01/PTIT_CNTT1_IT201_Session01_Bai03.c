#include <stdio.h>
#include <stdlib.h>

int* mallocArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i =0;i<n ; i++) {
        arr[i] = i;

    }
    return arr;
}
// ĐỘ phức tạp của không gian trong bài này là : O(n)
