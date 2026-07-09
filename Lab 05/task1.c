#include<stdio.h>
int main(){

    printf("a to z all alphabets \n");

    for (char i = 'a'; i <= 'z'; i++)
    {
        printf("%4c", i);
    }
    
    printf("\n\n1 to 100 all odd numbers \n");

    int x = 1;

    while (x <= 100)
    {
        printf("%4d", x);
        x += 2;
        
    }

    printf("\n\n1 to 10 all natural numbers \n");

    int y = 1;
    
    while (y <= 10)
    {
        printf("%4d", y);
        y += 1;
    }

    printf("\n\nNegative number\n");

    int num;

    while (num)
    {

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        break;
    }
    
    }
    
    printf("\n\n1 to 20 all even number\n");

    for (int z = 1; z <= 20; z++)
    {
        if (z % 2 == 0)
        {
            printf("%4d", z);
        }
        
    }

}