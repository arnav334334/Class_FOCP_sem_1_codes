#include<stdio.h>
#include<math.h>
void geo_series(int inputa,int inputr,int inputn){
    long long int result=0;
    for(long int i=1;i<=inputn;i++){
        result+=inputa*(pow(inputr,i-1));
    }
    printf("%lld",result);

}
int main(long long int result){
    int inputa;
    int inputr;
    int inputn;
    scanf("%ld",&inputa);
    scanf("%ld",&inputr);
    scanf("%ld",&inputn);
    geo_series(inputa,inputr,inputn);
    return 0;
}