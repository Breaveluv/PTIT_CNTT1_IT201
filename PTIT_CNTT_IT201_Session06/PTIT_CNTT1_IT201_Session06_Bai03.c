//
// Created by nambu on 29/06/2025.
//
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
int sum(char *str ,int i) {
    if (str[i] == '\0') {
        return 0;
    }
    return (str[i]-'0') + sum(str, i+1);

}
int main() {
    char *str = (char *)malloc(100*sizeof(char));
    printf("Nhap so nguyen duong");
    scanf("%s", str);
    if (str[0] == '\0'&&str[1]=='\0') {
        printf("NOOO khong phu hop");
        free(str);
        return 1;
    }
    for (int i = 0;str[i]!='\0';i++) {
        if (str[i] == '\0'||str[i]=='9') {
            printf("input khong phu hop");
            free(str);
            return 1;
        }
    }
    int result = sum(str,0);
    printf(" Tong cac chu so %d\n", result);
    free(str);
    return 0;
}