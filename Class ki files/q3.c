#include<stdio.h>
int main(){
    int units;
    printf("Enter the units consumed: ");
    scanf("%d",&units);
    if(units<=100){
        int rate=2;
        printf("Your total bill is: Rs%d",units*rate);
    }
    else if(units>100 && units<=200){
        int rate=3;
        printf("Your total bill is: Rs%d",units*rate);
    }
    else if(units>200){
        int rate=5;
        printf("Your total bill is: Rs%d",units*rate);
    }
    else{
        printf("Invalid argument");
    }
    return 0;
}