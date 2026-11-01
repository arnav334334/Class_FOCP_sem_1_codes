#include <stdio.h>
int main() {
    for (int i = 1; i <= 6; i++) {
        int value = (i % 2 == 0) ? i * 10 : i * 5;
        printf("%d:%d ", i, value);
        if (value > 25) {
            break;
        }
    }
    return 0;
}
//1:5 2:20 3:15 4:40