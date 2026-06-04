#include<stdio.h>
int main(){

    int mark;
    char name[20];

    printf("-----------Grade Calculator-----------\n");

    printf("**Enter Your Mark and Name** \n");
    printf("Enter the Mark (0-100): ");
    scanf("%d", &mark);
    printf("Enter Your Name:");
    scanf("%s", name);
    printf("----------------------------------------\n");

    printf("Student Name: %s\n", name);

    if(mark < 0 || mark > 100){
        printf("Invalid Mark!\n");
        return 1;

    }else if(mark >= 75){
            printf("Grade: A\n");
            printf("Excellent\n");

    }else if(mark >= 65){
            printf("Grade: B\n");
            printf("Very Good\n");

    }else if(mark >= 55){
            printf("Grade: C\n");
            printf("Good\n");

    }else if(mark >= 45){
            printf("Grade: D\n");
            printf("Pass\n");

    }else{
            printf("Grade: F\n");
            printf("Fail\n");
    }
    printf("----------------------------------------\n");
    return 0;
}