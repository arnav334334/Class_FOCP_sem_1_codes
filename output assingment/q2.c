#include <stdio.h>
int main() {
int num = 15;
while (num >= 5) {
printf("%d ", num);
num -= 3;
}
printf("Final: %d", num);
return 0;
}
//15 12 9 6 final: 6