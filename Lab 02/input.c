#include<stdio.h>
int main(){
     char name[20];
    int age;
    float GPA;
    char grade;

    printf("Student Information Input:\n");
    printf("--------------------------\n");

    printf("Enter your  name: ");
    scanf("%[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &GPA);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\nStudent Information:\n");
    printf("--------------------------\n");

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", GPA);
    printf("Grade: %c\n", grade);
  
return 0;
}
