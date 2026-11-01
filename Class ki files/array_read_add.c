#include<stdio.h>
int main(){
    int array[10]={0};
    int array_size=sizeof(array)/sizeof(int);
    int sum=0;
    printf("Enter the marks of 10 students: ");
    for(int i=0;i<array_size;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<array_size;i++){
        sum+=array[i];
    }
    printf("\n\n%d is the sum.",sum);
    return 0;
}