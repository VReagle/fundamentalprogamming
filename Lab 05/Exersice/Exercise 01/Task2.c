#include<stdio.h>

// Fibonacci Number

int fibonacci(int n){
    if (n <= 0) {
        return 0;
    }
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main(){
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    printf("%d place fibonacci Number : %d\n", num, fibonacci(num));
    return 0;
}