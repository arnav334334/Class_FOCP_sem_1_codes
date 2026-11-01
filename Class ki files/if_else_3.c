#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if(marks>=90){
        printf("A");
    }
    else if(marks>=75){
        printf("B");
    }
    else if(marks>=50){
        printf("C");
    }
    else{
        printf("D");
    }
    return 0;
}