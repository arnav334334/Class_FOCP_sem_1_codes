#include <stdio.h>
int main() {
    int grade = 85, category;
    if (grade >= 90) {
        category = 1;
    } else if (grade >= 80) {
        category = 2;
    } else {
        category = 3;
    }
    
    switch (category) {
        case 1: printf("A-"); 
                switch (grade / 10) {
                    case 9: printf("Excellent"); break;
                    case 10: printf("Perfect"); break;
                }
                break;
        case 2: printf("B-");
                if (grade >= 85) printf("Good");
                else printf("Fair");
                break;
        case 3: printf("C-Average"); break;
    }
    return 0;
}
//