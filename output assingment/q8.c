#include <stdio.h>
int main() {
    int n = 3, result = 0;
    while (result = n * 2, result < 20) {
        printf("n=%d,result=%d ", n, result);
        n += 3;
    }
    printf("Final: n=%d,result=%d", n, result);
    return 0;
}
//n=3,result=6 n=6,result=12 n=9,result=18 final: n=12,result=24