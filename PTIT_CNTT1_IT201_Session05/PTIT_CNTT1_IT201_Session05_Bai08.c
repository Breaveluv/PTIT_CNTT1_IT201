#include <stdio.h>
#include <string.h>

int isValible(char *str) {
    if (str[0] == '\0') {
        return 0;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}

int stringToInt(char *str, int len) {
    if (len == 0) {
        return 0;
    }
    return stringToInt(str, len - 1) * 10 + (str[len - 1] - '0');
}

int main(void) {
    char str[100];
    printf("Nhap chuoi: ");
    scanf("%s", str);

    // Bỏ các số 0 đầu chuỗi
    int start = 0;
    while (str[start] == '0') {
        start++;
    }

    if (!isValible(str + start)) {
        printf("Input không hợp lệ\n");
    } else {
        int result = stringToInt(str + start, strlen(str + start));
        printf("Ket qua: %d\n", result);
    }

    return 0;
}
