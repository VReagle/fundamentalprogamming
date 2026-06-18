#include<stdio.h>
int main(){

    printf("a to z all alphabets \n");

    for (char i = 'a'; i <= 'z'; i++)
    {
        printf("%c", i);
    }
    
    printf("\n1 to 100 all odd numbers \n");

    int x = 1;

    while (x <= 100)
    {
        printf("%d", x);
        x += 2;
        
    }

    printf("\n1 to 10 all natural numbers \n");

    int y = 1;
    
    while (y <= 10)
    {
        printf("%d", y);
        y += 1;
    }

    printf("\nNegative number\n");

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
    
    printf("\n1 to 20 all even number\n");

    for (int z = 1; z <= 20; z++)
    {
        if (z % 2 == 0)
        {
            printf("%d", z);
        }
        
    }

}