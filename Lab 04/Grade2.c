#include<stdio.h>
int main(){

    int mark;
    char name[20];

    printf("-----------Grade Calculator-----------\n");

    printf("**Enter Your Mark and Name** \n");
    printf("Enter the Mark (0-100): ");
    scanf("%d", &mark);
    //printf("Enter Your Name:");
    //scanf("%s", name);
    printf("----------------------------------------\n");

    //printf("Student Name: %s\n", name);

    switch(mark / 10){
        case 10:
        case 9:
        case 8:
        case 7:
            printf("Grade A - Excellent\n");
            break;
        case 6:
            printf("Grade B - Good\n");
            break;
        case 5:
            printf("Grade C - Average\n");
            break;
        case 4:
            printf("Grade D - Below Average\n");
            break;
        default:
            printf("Grade F - Fail\n");
            break;

    }

}