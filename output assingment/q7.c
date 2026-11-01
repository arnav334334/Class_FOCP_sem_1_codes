#include <stdio.h>
int main() {
    int product = 1;
    for (int x = 2, y = 5; x <= y; x++, y--) {
        product *= x;
        printf("x=%d,y=%d,product=%d ", x, y, product);
    }
    return 0;
}
//x=2,y=5,product=2 (x=3,y=4,product=6)