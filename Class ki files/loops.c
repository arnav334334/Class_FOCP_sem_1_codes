#include<stdio.h>
int main(){
    int lets_define=0;
    int display_unit=1;
    while(lets_define<10){
        printf("The loop is running %d\n",display_unit);
        lets_define++;
        display_unit++;
    }
    return 0;
}