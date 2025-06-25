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
    int fixIndex,newNum;
    do {
        printf("Nhập vị trí cần thay đổi");
        scanf("%d",&fixIndex);
        if (fixIndex<0||fixIndex>=n) {
            printf("Thu tu khong hop le");

        }
    }while(fixIndex<0||fixIndex>=n);
    printf("Nhap gia tri moi");
    scanf("%d",&newNum);
    arr[fixIndex]=newNum;
    for (int i =0;i<n;i++) {
        printf("%d",i);
    }
    return 0;
}