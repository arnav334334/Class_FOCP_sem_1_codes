#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
if(marks>=90){
    printf("A");
}
if(marks>=75 && marks<90){
    printf("B");
}
if(marks>=50 && marks<75){
    printf("C");
}
if(marks<50){
    printf("D");
}
return 0;
}