//
// Created by nambu on 29/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
void toBina(int n,int *a,int *i) {
    if (n==0) {
        return;
    }
    toBina(n/2,a,i);
    a[(*i)++]=n%2;
}
int main() {
    int n;
    printf("Nhap so nguyen duong");
    scanf("%d",&n);
    if (n<=0) {
        printf("Khong hop le");
        return 1;
    }
    int *a=(int*)malloc(32*sizeof(int));
    int i=0;
    toBina(n,a,&i);
    printf("Hehee");
    for (int j=0;j<i;j++) {
        printf(" %d",a[j]);
    }
    printf("\n");
    free(a);
    return 0;
}