#include <stdio.h>
int main() {
int a = 5, b = 3, c = 8;
if (a + b > c || a * b < c && a - b > 0)
printf("True");
else
printf("False");
if (!(a < b) && (c % a == 3))
printf("Match");
return 0;
}
//FalseMatch