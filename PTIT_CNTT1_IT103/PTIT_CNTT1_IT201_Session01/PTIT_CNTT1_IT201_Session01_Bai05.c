//
// Created by nambu on 16/06/2025.
//
#include <stdio.h>
int main () {
    int nam[]={1,2,3,4,,6,7,11,8,9};
    int n= sizeof(nam)/sizeof(nam[0]);
    for (int i = 0 ; i< n-1; i++) {
        for ( int j =0;j<n-1-i;j++) {
            if (nam[j] > nam[j+1]) {
                int temp = nam[j];
                nam[j] = nam[j+1];
                nam[j+1]=temp;

            }
        }
    }
    for (int i = 0; i <n; i++) {
        printf("%d ",nam[i]);
    }
    return 0;
}
// độ phức tạp thời gian 0(n^2)
//độ phức tạp không gian 0(1)
