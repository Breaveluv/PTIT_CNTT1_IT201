//
// Created by nambu on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the number of processes:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation error");
        return 1;
    }
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d",&arr[i]);

    }
    int found=0;
    for (int i = 0; i < n/2; i++) {
        if (arr[i] == arr[n-1-i]) {
            printf("Cap doi xung (%d, %d) \n",arr[i],arr[n-1-i]);
            found=1;
        }
    }
    if (!found) {
        printf("ERORRR");
    }
    free(arr);
    return 0;

}