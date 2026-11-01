#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 1; i <= 20; i++) {
        sum += i;
        if (sum > 15) {
            printf("Sum=%d at i=%d ", sum, i);
            break;
        }
    }
    printf("Final sum: %d", sum);
    return 0;
}
//sum=1 at i=1 sum=3 at i=2 sum=6 at i=3 sum=10 at i=4 fina sum: 15