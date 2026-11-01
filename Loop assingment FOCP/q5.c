#include<stdio.h>

void prime_finder(long int input){
    int isprime=1;

    if(input==1){
        isprime=0;
    }

    for(int i=2;i<input;i++){
        if(input%i==0){
            isprime=0;
            break;
        }
    }
    printf("%d",isprime);
}

int main(long long int result){
    long int input;
    scanf("%ld",&input);
    prime_finder(input);
    return 0;
}