#include <stdio.h>
int main() {
    int i = 5;
    do {
        printf("%d ", ++i);
    } while (i < 8);
    
    printf("| ");
    
    i = 5;
    do {
        printf("%d ", i++);
    } while (i < 8);
    
    return 0;
}
//6 7 8 | 5 6 7