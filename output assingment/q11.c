#include <stdio.h>
int main() {
int p = 1, q = 16;
while (p <= 8 && q >= 2) {
printf("%d-%d ", p, q);
p *= 2;
q /= 2;
}
printf("Stop: p=%d,q=%d", p, q);
return 0;
}
//1-16 2-8 4-4 8-2 stop: p=16,q=1