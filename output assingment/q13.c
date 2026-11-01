#include <stdio.h>
int main() {
int count = 0;
for (int i = 10; i > 0; i--, count++, printf("%d ", i));
printf("Count: %d", count);
return 0;
}
//10 count: 0 9 count: 1 8 count: 2 7 count: 3 6 count: 4 5 count: 5 4 count: 6 4 count: 7 3 count: 8 2 count: 9 1 count: 10 0