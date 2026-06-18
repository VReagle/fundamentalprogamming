#include<stdio.h>
int main(){

    // For Loop

    /*for( int i = 0; i <= 5; i++){

        printf("%d \n", i);


    }*/

    // While Loop

    /*int num = 2;

    while(num <= 10){

        printf("%d \n", num);
        num += 2;

    }*/

    // Do while Loop

    /*int input;

    do{

        printf("Enter a positive number: ");
        scanf("%d", &input);

    }while (input <= 0);
    {
       printf("You enter the positive Number : %d \n", input);
    }*/

    /*for (int i = 1; i <= 10; i++)
    {
        if(i % 2 == 0){

            printf("First Even Numbers:  %d \n", i);
            break;
        }
        
    }*/

    /*for (int i = 1; i <= 10; i++)
    {
        if (i % 2 ==0)
        {
            continue;
        }
        
        printf("%d \n", i);

    }*/

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c", ch);
    }
    
    
    


    return 0;
}