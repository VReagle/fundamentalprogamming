#include<stdio.h>
int main(){

    char name[10];
    char reg[20];

    int sub1;
    int sub2;
    int sub3;

    int tot;

    float avg;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your registration number: ");
    scanf("%s", reg);

    printf("Enter marks for subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &sub3);

    if (tot > 100 && tot <= 0){
        printf("Invalid total marks entered.\n");
        return 1;
    }

    tot = sub1 + sub2 + sub3;
    avg = tot / 3;


    printf("************Final Result************\n");

    printf("Student Name: %s\n", name);
    printf("Registration Number: %s\n", reg);
    printf("Total Marks: %d\n", tot);
    printf("Average Marks: %.2f\n", avg);

    if (tot >= 75) {
        printf("Grade: Distinction\n");
    } else if (tot >= 60) {
        printf("Grade: Credits\n");
    }else if (tot >= 50) {
        printf("Grade: Pass\n");
    } else {
        printf("Grade: Fail\n");
    }

    if (avg >= 75 && tot >= 50) {
    printf("Scholarship Status: Eligible\n");
    } else {
    printf("Scholarship Status: Not Eligible\n");
    }

    return 0;
    
}