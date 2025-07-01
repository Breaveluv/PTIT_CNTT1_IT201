//
// Created by nambu on 01/07/2025.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(char *str , int len) {
 for (int i = 0; i < len; i++) {
     for (int j = 0; j < len-i-1; j++) {
         if (str[j] > str[j+1]) {
             swap(&str[j], &str[j+1]);
         }
     }
 }
}
int main() {
    char *input;
    int size;
    input = (char*)malloc(100*sizeof(char));
    printf("Enter string: ");
    fgets(input, 100, stdin);
    size = strlen(input);
    if (input[size-1] == '\n') {
        input[size-1] = '\0';
        size--;
    }
    printf("Chuoi truoc khi sap: ");
    bubbleSort(input, size);
    printf("Chuoi sau khi sap", input);
    free(input);
    return 0;
}