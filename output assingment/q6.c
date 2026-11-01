#include <stdio.h>
int main() {
    int a = 2, b = 8;
    do {
        printf("(%d,%d) ", a, b);
        a *= 2;
        b /= 2;
    } while (a < b);
    printf("End: a=%d, b=%d", a, b);
    return 0;
}
//(2,8) End: a=4, b=4