//
// Created by nambu on 02/07/2025.
//
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}
void bubbleSort(int arr[], int len) {
   int swapped ;
   for (int i = 0; i < len-1; i++) {
         swapped = 0;
       for (int j = 0; j < len-i-1; j++) {
          if (arr[j] > arr[j+1]) {
             swap(&arr[j], &arr[j+1]);
             swapped = 1;
          }
       }
      if (swapped==0) {
         break;
      }
   }
}
void printArray(int arr[], int len) {
   for (int i = 0; i < len; i++) {
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
      if (n<=0||n>=1000) {
         printf("Invalid Input\n");
      }
   }while(n<=0||n>=1000);
   arr = (int*)malloc(n*sizeof(int));
   printf("Enter array elements\n");
   for (int i = 0; i < n; i++) {
      printf("Nhap cac phan tu arr[%d]",i);
      scanf("%d", &arr[i]);
   }
   printf("Mang ban dau \n");
   printArray(arr, n);
   bubbleSort(arr, n);
   printf("Mang sau khi sap xep");
   printArray(arr, n);
   free(arr);
   return 0;
}