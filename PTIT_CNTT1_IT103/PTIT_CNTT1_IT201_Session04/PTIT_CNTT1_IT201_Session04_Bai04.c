#include <stdio.h>
int main () {
    int n;
    int arr[100];
    int a;
    printf("Nhap so phan tu cua mang 0 < n<=100");
    scanf("%d",&n);
    printf("Nhap so can tim");
    scanf("%d",&a);
    if (n<=0||n>100) {
        printf("Phan tu khong hợp lệ");
        return 1;

    }
    printf("Nhập %d phan tu :\n",n);
    for (int i=n;i>0;i--) {
        if (arr[i]==a) {
            printf("Tìm thấy phần tử");
            return 0;
        }else {
            printf(" 0 Tìm thấy phần tử");
            return 0;
        }

    }
}