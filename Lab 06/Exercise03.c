#include<stdio.h>
int main(){

    float array[10];

    float max;

    printf("Enter 10 Floating Numbers\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Enter student %d Mark : ", i+1);
        scanf("%f", &array[i]);
    }

    max = array[0];

    for (int i = 0; i < 10; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }

    }

    printf("Maximum Value : %.2f", max);
    
    return 0;
}