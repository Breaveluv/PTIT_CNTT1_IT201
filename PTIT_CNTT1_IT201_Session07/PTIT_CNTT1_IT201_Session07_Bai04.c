#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(char *a, char *b) {
    char *temp=*a;
    *a=*b;
    temp=*b;
}
void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
// ktra ki tu trong
int isBalnk(const char *str) {
while (*str != '\0') {
    if (*str !=' ') {
        return 0;
    }
    str++;
}
    return 1;
}
int main() {
    char *str;
    str = (char *)malloc(100*sizeof(char));
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    size_t len = strlen(str);
    if (len > 0&&str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    if (len==0||isBalnk(str)) {
        printf("Not a valid string\n");
        free(str);
        return 1;
    }
    printf("Chuoi truoc khi sx: %s",str);
    bubbleSort(str, len);
    printf("Chuoi sau khi sx: %s",str);
    free(str);
    return 0;
}
