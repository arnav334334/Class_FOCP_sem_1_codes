#include<stdio.h>
int main(){
    int array[10]={0};
    int array_size=sizeof(array)/sizeof(int);
    printf("Enter the marks of 10 students: ");
    for(int i=0;i<array_size;i++){
        printf("\n>>");
        scanf("%d",&array[i]);
    }
    for(int i=array_size;i>=0;i--){
        printf("Marks of student %d: %d\n",i+1,array[i]);
    }
    return 0;
}