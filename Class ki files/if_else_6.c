#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(b>c){
            printf("%d is the smallest.",c);
        }
        else{
            printf("%d is the smallest",b);
        }
    }
    else{
        if(b>a){
            if(a>c){
                printf("%d is the smallest",c);
            }
            else if(c>a){
                printf("%d is the smallest",a);
            }
        }
    }
    return 0;
}