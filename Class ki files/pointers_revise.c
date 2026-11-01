#include<stdio.h>
int main(){
    int num=10;
    int *num_p=&num;
    printf("n = %d, n address(num)=%d, n address=%p",num,num_p,num_p);
    *num_p=67;
    printf("\nn = %d, n address(num)=%d, n address=%p",num,num_p,num_p);
    return 0;
}