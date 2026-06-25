#include<stdio.h>

// Prime Number Task

int isPrime(int num){

    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) //3
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(){

    int input;

    printf("Enter a Number: ");
    scanf("%d", &input); //15
    
    if(isPrime(input)) printf("Its prime");
        
    else printf("Its not prime");

}
