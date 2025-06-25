#include <stdio.h>
int main () {
    int arr[] = {1,3,2,4,6,9,5,3,2,1,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxCount = 0;
    int max;

                for (int i = 0; i<n; i++) {
                    int count = 1;
                    for (int j = i+1;j<n;j++) {
                        if (arr[i]==arr[j]) {
                            count++;

                        }
                    }
                    if (count>maxCount) {
                        maxCount = count;
                        max = arr[i];

                    }
                }
    printf("Phần tử xuất hiện nhiều nhất ", max,maxCount);
        return 0;
}