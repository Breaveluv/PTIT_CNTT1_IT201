#include <stdio.h>
int main(){

int tlinh[]={2,1,4,2,5,6};
int n = sizeof(tlinh)/sizeof(tlinh[0]);
int x = 2;
int count =0;
for (int i = 0; i < n; i++) {
    if (tlinh[i]==x) {
        count++;
    }
}
    printf(" So lan xuat hien %d", count);
    return 0;
}
// Độ phức tạp thời gian  O(n)