#include<stdio.h>
void factorial(long int input){
    long long int result=1;
    for(long int i=input;i>0;i--){
        result*=i;
    }
    printf("%lld",result);

}
int main(long long int result){
    long int input;
    scanf("%ld",&input);
    factorial(input);
    return 0;
}