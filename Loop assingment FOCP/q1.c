#include<stdio.h>
#include<math.h>
void series(long int input){
    long long int result=0;
    for(long long int i=1;i<=input;i++){
        result+=i*i;
    }
    printf("%lld",result);
}

int main(long long int result){
    long int input;
    scanf("%ld",&input);
    series(input);
    return 0;
}