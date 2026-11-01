#include<stdio.h>
int main(){
    int num1;
    int num2;
    printf("Enter some good number: ");
    scanf("%d",&num1);
    printf("Enter another nice number: ");
    scanf("%d",&num2);
    if(num1<num2){
        printf("The second number is greater than first.");
    }
    else if(num1>num2){
        printf("The first number is greater than second.");
    }
    else{
        printf("Both are equal.");
    }
    return 0;
}