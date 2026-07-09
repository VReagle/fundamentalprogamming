#include<stdio.h>
int main(){


    int marks[6];

    int avg;

    printf("***Enter the Student Marks***\n\n");

    for (int i = 0; i < 6; i++)
    {
        printf("Enter Subject %d Mark : ", i+1);
        scanf("%d", &marks[i]);
    }
    
    int sum = 0.0;
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        sum = sum + marks[i];

    }

    printf("***Results***\n\n");
    
    for (int i = 0; i < 6; i++)
    {
        printf("Subject %d : %d \n", i+1, marks[i]);
    }
    printf("\n");

    printf("Avarage : %d", sum/6);



    return 0;
}