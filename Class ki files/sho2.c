#include <stdio.h>
int main(){
    char name[20];
    int age;
    float height;
    char grade;
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter your grade here: ");
    scanf(" %c",&grade);
    printf("\n\n---------------Student Profile----------------\n\n");
    printf("Name: %s\n",name);
    printf("age: %d\n",age);
    printf("height: %.1fm\n",height);
    printf("grade: %c\n\n",grade);
    return 0;
}