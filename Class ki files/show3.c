#include<stdio.h>
int main(){
    int one;int two;
    printf("Enter the first integer: ");
    scanf("%d",&one);
    printf("Enter the second integer here: ");
    scanf("%d",&two);
    printf("\n\nThe first number: %d\nThe second character: %d",one,two);
    printf("\nSum: %d",one+two);
    printf("\nDifference: %d",one-two);
    printf("\nProduct: %d",one*two);
    printf("\nQuotient: %d",one/two);
    return 0;
}