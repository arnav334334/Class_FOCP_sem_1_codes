#include<stdio.h>
int main(){
    int array_1[4]={1,2,3,4};
    int array_2[4]={0};
    int array_3[4]={5,6};
    int array_4[4]={7,78,9,90,56};
    int number_of_elements=sizeof(array_1)/sizeof(int);
    printf("\narray 1\n");
    for(int i=0;i<number_of_elements;i++){
        printf("%d\n",array_1[i]);
    }
    printf("\narray 2\n");
    for(int i=0;i<number_of_elements;i++){
        printf("%d\n",array_2[i]);
    }
    printf("\narray 3\n");
    for(int i=0;i<number_of_elements;i++){
        printf("%d\n",array_3[i]);
    }
    printf("\narray 4\n");
    for(int i=0;i<number_of_elements;i++){
        printf("%d\n",array_4[i]);
    }
}