#include<stdio.h>
int main(){
    int number_of_stars;
    scanf("%d",&number_of_stars);
    int number_of_lines;
    scanf("%d",&number_of_lines);
    for(int i=0;i<number_of_lines;i++){
        for(int j=0;j<number_of_stars;j++){
            printf("%d",j+1);
        }
        printf("\n");
}
    return 0;
}