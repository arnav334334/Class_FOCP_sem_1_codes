#include<stdio.h>
int main(){
    int prct;
    int rn;
    char sec;
    printf("Hey bro!!, enter your useless college roll no.(only the last 3 digits): ");
    scanf("%d%d %c",&rn,&prct,&sec);
    printf("roll no.: %10d\n",rn);
    printf("pecentage: %10d %%\n",prct);
    printf("section: %10c",sec);
    return 0;
}
