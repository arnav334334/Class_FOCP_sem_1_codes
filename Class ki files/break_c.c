#include<stdio.h>
int main(){
    int sum=0;
    int entered_number;
    scanf("%d",&entered_number);
    for(int i=1;i<=entered_number;i++){
        if(i%7==0){
            printf("Multiple of 7 will not be considered.");
            break;
        }
        else{sum+=i;
        printf("%d\n",i);}
        
    }
    printf("Sum is +: %d",sum);
    return 0;
}