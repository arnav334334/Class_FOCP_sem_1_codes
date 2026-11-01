#include <stdio.h>
int main() {
char ch = 'A' + 2;
int count = 0;
switch (ch) {
case 'A': count++; printf("A");
case 'B': count++; printf("B");
case 'C': count++; printf("C");
case 'D': count++; printf("D"); break;
default: printf("X");
}
printf("-%d", count);
return 0;
}
//C-67