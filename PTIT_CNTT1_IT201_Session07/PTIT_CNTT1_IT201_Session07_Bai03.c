//
// Created by nambu on 01/07/2025.
//
#include <stdio.h>
#include <stdlib.h>
 void insertionSort(int *arr, int len) {
     for (int i = 0; i < len; i++) {
         int key = arr[i];
         int j = i - 1;
         while (j >= 0 && arr[j] > key) {
             arr[j + 1] = arr[j];
             j = j - 1;
             j--;
         }
         arr[j + 1] = key;
     }
 }
void printArray(int *arr, int len) {
     for (int i = 0; i < len; i++) {
         printf("%d ", arr[i]);
     }
 }
int main() {
     int n;
     int *arr;
     printf("Enter number of elements: ");
     scanf("%d", &n);
     if (n <= 0|| n > 1000) {
         printf("Invalid Input\n");
     }
     arr = (int *)malloc(n * sizeof(int));
     printf("Enter array elements:%d ",n);
     for (int i = 0; i < n; i++) {
         scanf("%d", &arr[i]);
     }
     printf("\n");
     printf("Mang truoc khi sap xep");
     printArray(arr, n);
     insertionSort(arr, n);
     printf("Mang sau khi sx");
     printArray(arr, n);
     free(arr);
     return 0;
 }