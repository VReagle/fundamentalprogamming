#include<stdio.h>
int main(){

    int student_marks[5];


    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks Student %d: ", i+1);
        scanf("%d", &student_marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Student %d marks : %4d \n", i+1, student_marks[i]);
    }


   return 0; 
}