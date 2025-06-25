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
    printf("Nhap so cần kiểm tra");
    scanf("%d",&x);
    for (int i =0; i<n;i++) {
        if (arr[i]==x) {
            count++;
        }
    }
    printf("So lan xuat hien cua %d tong mang la %d",x,count);
    return 0;
}
