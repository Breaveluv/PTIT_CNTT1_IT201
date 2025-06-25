#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int x;
    int count =0;
    printf("Nhập số lượng phần tử: ");
    scanf("%d",&n);
    if (n<=0||n>100) {
        printf("Phan tu khong hợp lệ");
        return 1;

    }
    printf("Nhập các phần tử của mảng\n");
    for (int i =0;i<n;i++) {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    int indexDelete;
    do {
        printf("Nhap vi tri can xoa : ");
        scanf("%d",&indexDelete);
        if (indexDelete<0|| indexDelete>=n) {
            printf("NOOOOO");

        }
    }while (indexDelete<0|| indexDelete>=n);
        for (int i =indexDelete;i<n-1;i++) {
            arr[i]=arr[i+1];

        }
        for (int i=0;i<n-1;i++) {
            printf("%d",arr[i]);
        }
        return 0;
    }