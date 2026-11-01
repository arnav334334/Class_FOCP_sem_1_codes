#include<stdio.h>
int main(){
    int sum=0;
    for(int i=10;i>=1;i--){
        printf("%d\n",i);
        sum+=i;
    }
    printf("The sum is %d",sum);
}