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
    int indexAdd,numIndexAdd;
    do {
        printf("Nhap vi tri can them : ");
        scanf("%d",&indexDelete);
        if (indexAdd<0|| indexAdd>=n) {
            printf("NOOOOO");

        }
    }while (indexAdd<0|| indexAdd>=n);
        printf("Nhap So moi muon them vao");
        scanf("%d",&numIndexAdd);
    for (int a =n;a>numIndexAdd;a--) {
        arr[a]=arr[a-1];
        n++;
        ;
    }
    for (int a =0;a<n;a++) {
        printf("%d ",arr[a]);
    }
    return 0;
}
