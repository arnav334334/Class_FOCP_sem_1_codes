#include<stdio.h>
int main(){
    int array[10]={0};
    int array_size=sizeof(array)/sizeof(int);
    int sum=0;
    int no_odd=0;
    printf("Enter the marks of 10 students: ");
    for(int i=0;i<array_size;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<array_size;i++){
        int remanider = array[i]%2;
        if(remanider==0){
            continue;
        }
        else{
            no_odd++;
        }
    }
    printf("\n\n%d is the number of students with odd sum.",no_odd);
    return 0;
}