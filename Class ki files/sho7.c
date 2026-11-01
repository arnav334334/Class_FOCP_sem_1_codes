#include<stdio.h>
int main(){
    float BS;
    float HRA;
    float DA;
    float GS;
    printf("Enter your basic salary here: ");
    scanf("%f",&BS);
    HRA=(20*BS)/100;
    DA=(10*BS)/100;
    GS=BS+DA+HRA;
    printf("\n\nBasic Salary: %.2f\nHRA: %.2f\nDA: %.2f\nGross Salary: %.2f",BS,HRA,DA,GS);
    return 0;
}