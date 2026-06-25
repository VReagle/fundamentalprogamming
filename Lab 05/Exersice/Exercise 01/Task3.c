#include<stdio.h>

// Greatest Common Devision (GCD)

int gcd(int n1, int n2){

    while (n2 != 0)
    {
        int rem = n1 % n2;
            n1 = n2;
            n2 = rem;
    }
    return n1;
}


int main(){

int num1;
int num2;

printf("Enter Number 1 : ");
scanf("%d", &num1);

printf("Enter Number 2 : ");
scanf("%d", &num2);

int result = gcd(num1,num2);

printf("%d", result);

}