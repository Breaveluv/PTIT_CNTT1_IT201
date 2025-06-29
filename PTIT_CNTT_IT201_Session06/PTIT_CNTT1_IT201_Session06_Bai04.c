//
// Created by nambu on 30/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int step =0;
void moveHanoi(int n, char from, char to, char temp,char **steps) {
    if (n==0) {
        return;
    }
    moveHanoi(n-1, from, temp, to, steps);
    sprintf(steps[step], "Dia %d di chuyen tu %c sang %c", n, from, to);
    step++;

    moveHanoi(n - 1, temp, to, from, steps);


}
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    if (n<= 0) {
        printf("Invalid Input");
        return 1;
    }
    int maxSteps = (1<<n)-1;
    char **steps = (char **)malloc(maxSteps*sizeof(char *));
    for (int i = 0; i < maxSteps; i++) {
        steps[i] = (char *)malloc(50*sizeof(char));

    }
    moveHanoi(n, 'A', 'B', 'C', steps);
    for (int i = 0; i < maxSteps; i++) {
        printf("%s\n", steps[i]);
        free(steps[i]);
    }
    free(steps);
    return 0;
}