#include<stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    printf("Enter the number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3){
            printf("%d is greatest",num1);
        }
        else{
            printf("%d is the greatest",num3);
        }
    }
    else if(num3>num1){
        if(num3>num2){
            printf("%d is greatest",num3);
        }
        else{
            printf("%d is the greatest",num2);
        }
    }
    return 0;
}