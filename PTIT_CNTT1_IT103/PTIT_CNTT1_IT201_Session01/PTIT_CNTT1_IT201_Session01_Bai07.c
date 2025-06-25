
#include <stdio.h>
int ex1(int arr[], int n) {
    for (int i =0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i] ==arr[j]) {
                return 1;
            }
        }
    }
    return 0;
}
int ex2(int arr[], int n) {
    int count[1001]={0};
    for ( int i = 0;i<n;i++) {
        if (count[arr[i]]==1) {
            return 1;
        }
    count[arr[i]]= 1;

    }
    return 0;
}
int main () {
    int arr[]={1,4,2,5,3,8,7,11,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    if (ex1(arr,n)) {
        printf("trung");
    }else {
        printf(" 0 trung");
    }
    if (ex2(arr,n)) {
        printf(" trung");
    }else {
        printf(" 0 trung");
    }
    return 0;


}
//c1 0(n^2)
// c2 O(n)
