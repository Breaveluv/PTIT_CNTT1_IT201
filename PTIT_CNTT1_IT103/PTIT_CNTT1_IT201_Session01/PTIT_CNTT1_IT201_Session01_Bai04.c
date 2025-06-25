#include <stdio.h>
int sumLe(int n) {
    int sum = 0;
    for (int i = 1; i<=n; i++) {
        sum+=i;

    }
    return sum;
}
// độ phức tạp  O (n)
 int SumFo(int n) {
    return n*(n+1)/2;

}
