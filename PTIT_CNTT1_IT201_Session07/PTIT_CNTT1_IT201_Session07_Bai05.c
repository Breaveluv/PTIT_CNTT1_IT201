
//
// Created by nambu on 01/07/2025.
//
#include <stdlib.h>
#include <stdio.h>
 void swap(int *a, int *b) {
     int temp = *a;
     *a = *b;
     *b = temp;
 }
int partition(int *arr, int low, int high) {
     int pivot = arr[high];
     int i = low - 1;
     for (int j = low; j < high; j++) {
         if (arr[j] <= pivot) {
             i++;
             swap(&arr[i], &arr[j]);
         }
     }
     swap(&arr[i + 1], &arr[high]);
     return i + 1;
 }
void quickSort(int *arr, int low, int high) {
     if (low < high) {
         int pi = partition(arr, low, high);
         quickSort(arr, low, pi - 1);
         quickSort(arr, pi + 1, high);
     }
 }
void printArray(int *arr, int len) {
     for (int i = 0; i < len; i++) {
         printf("%d ", arr[i]);
     }
     printf("\n");
 }
int main() {
    int n;
     int *arr;
     printf("Enter length of array: ");
     scanf("%d", &n);
     if (n<=0||n>1000){
     printf("ERORR INPUT INVALID INPUT\n");

     return 1;
     }
     arr = (int*)malloc(n*sizeof(int));
     printf("Nhap %d phan tu: \n ",n);
     for (int i = 0; i < n; i++) {
         scanf("%d", &arr[i]);

     }
     printf("After");
     printArray(arr, n);
     quickSort(arr, 0, n-1);
     printf("Before");
     printArray(arr, n);
     free(arr);

     return 0;


 }