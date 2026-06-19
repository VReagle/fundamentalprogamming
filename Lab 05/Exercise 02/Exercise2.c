#include<stdio.h>

int printStart(int n){

        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }

    return 1;
}

int main(){

    int c;
    printf("Enter the Number: ");
    scanf("%d", &c);
    printStart(c);
    
    return 0;
}