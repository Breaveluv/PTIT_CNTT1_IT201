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
    for (int i =n;i>0;i--) {
        printf("arr[%d]",i);
    }
    return 0;
}