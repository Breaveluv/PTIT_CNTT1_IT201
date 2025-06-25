#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int x;
    int count =0;
    int a;
    int number1;
    int number2;
    int found =0;
    printf("Nhập số lượng phần tử: ");
    scanf("%d",&n);
    printf("Nhaap so muon tim ");
    scanf("%d",&a);
    if (n<=0||n>100) {
        printf("Phan tu khong hợp lệ");
        return 1;

    }
    printf("Nhập các phần tử của mảng\n");
    for (int i =0;i<n;i++) {
        printf("arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for (int i =0;i<n-1;i++) {
        for (int j =i+1;j<n;j++) {
            if (arr[i]+arr[j]==a) {
                arr[i]=number1;
                arr[j]=number2;
                found = 1;
                break;
            }

        }
        if (found==1) {
            break;
        }


    }
    if (found==1) {
        printf("%d %d",number1,number2);
    }else {
        printf("NOOO");
    }
    return 0;
}