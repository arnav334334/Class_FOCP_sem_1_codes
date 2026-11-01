#include <stdio.h>
int main() {
int num = 25;
do {
int digit = num % 10;
printf("%d ", digit);
num /= 10;
} while (num > 0);
printf("Done");
return 0;
}
//5 2 done