#include<stdio.h>

void digit_counter(long int input){
    if(input>=0 && input<10){
        printf("%d",1);
    }
    else if(input>=10 && input<100){
        printf("%d",2);
    }
    else if(input>=100 && input<1000){
        printf("%d",3);
    }
    else if(input>=1000 && input<10000){
        printf("%d",4);
    }
    else if(input>=10000 && input<100000){
        printf("%d",5);
    }
    else if(input>=100000 && input<1000000){
        printf("%d",6);
    }
    else if(input>=1000000 && input<10000000){
        printf("%d",7);
    }
    else if(input>=10000000 && input<100000000){
        printf("%d",8);
    }
    else if(input>=100000000 && input<1000000000){
        printf("%d",9);
    }
    else if(input>=1000000000 && input<10000000000){
        printf("%d",10);
    }

}

int main(long long int result){
    long int input;
    scanf("%ld",&input);
    digit_counter(input);
    return 0;
}