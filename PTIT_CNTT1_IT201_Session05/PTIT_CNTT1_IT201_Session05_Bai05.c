//
// Created by nambu on 26/06/2025.
//
#include <stdio.h>
#include <string.h>

int doiXung(char arr[], int end, int start) {
    if (start == end) {
        return 1;

    }
    if (arr[start] != arr[end]) {
        return 0;
    }
    return doiXung(arr, end-1, start + 1);

}
int main() {
    char arr[1000];
    printf("Nhap chuoi de");
    fgets(arr,sizeof(arr), stdin);
    size_t len = strlen(arr);
    if (len>0 && arr[len-1] == '\n') {
        arr[len-1] = '\0';
    }
    if (doiXung(arr, len-1, 0)) {
        printf("Chuoi doi xung\n");
    }else {
        printf("Chuoi 0 xung\n");
    }
    return 0; b
}