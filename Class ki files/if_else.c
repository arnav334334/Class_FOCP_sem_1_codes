#include<stdio.h>
int main(){
    int num1;
    printf("Pehla daal: ");
    scanf("%d",&num1);
    int num2;
    printf("Doosra daal: ");
    scanf("%d",&num2);
    if(num1==num2){
        printf("Dono barabar");
    }
    else if(num1>num2){
        printf("Pehla bada hai");
    }
    else{
        printf("Doosra bada hai");
    }
    return 0;
}