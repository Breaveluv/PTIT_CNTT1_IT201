//
// Created by nambu on 26/06/2025.
//
//
// Created by nambu on 26/06/2025.
//
#include <stdio.h>
int Sum(int start, int end) {
    if (start > end) {
        return 0;
    }
    return end + Sum(start,end - 1);
}
int main() {
    int firstNum;
    int secondNum;
    int sum;
    do {
        printf("Enter a number1: ");
        scanf("%d", &firstNum);
        printf("Enter a number2: ");
        scanf("%d", &secondNum);
        if (firstNum<=0||secondNum<=0||firstNum >= secondNum) {
            printf("ERORRR\n");
        }
        }while (firstNum<=0||secondNum<=0||firstNum >= secondNum);
        sum = Sum(firstNum,secondNum);
        printf("Tong la %d\n", sum);
        return 0;
    }







