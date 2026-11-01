#include <stdio.h>
int main() {
int i;
for (i = 2; i <= 8; i += 2) {
printf("%d ", i * i);
}
printf("End: %d", i);
return 0;
}
//16 36 end: 8