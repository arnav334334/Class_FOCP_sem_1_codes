#include <stdio.h>
int main() {
int x = 10, y = 3;
switch (x % y + 1) {
case 1: printf("Case1-");
case 2: printf("Case2-"); break;
case 3: printf("Case3-");
default: printf("Default-");
case 4: printf("Case4-");
}
printf("End");
return 0;
}
//Case2-End