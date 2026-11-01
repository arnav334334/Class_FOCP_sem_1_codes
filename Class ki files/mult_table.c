#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int table_num=1;
    do
    {
    printf("%d x %d = %d\n",num,table_num,num*table_num);
    } while (table_num<=10);
    
}