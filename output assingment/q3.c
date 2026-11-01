#include <stdio.h>
int main() {
    int x = 1;
    do {
        printf("%d ", x * 3);
        x++;
    } while (x <= 4);
    
    x = 10;
    do {
        printf("%d ", x);
        x++;
    } while (x < 10);
    
    return 0;
}
//3 6 9 12 15 10