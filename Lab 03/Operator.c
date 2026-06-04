#include<stdio.h>
int main(){

    int a = 15;
    int b = 5;
    int c = 0;

    printf("----------------Arithmetic Operators----------------\n");

    printf("addition of a and b: %d\n", a+ b);
    printf("subtraction of a and b: %d\n", a - b);
    printf("multiplication of a and b: %d\n", a * b);
    printf("division of a and b: %d\n", a / b);
    printf("remainder of a and b: %d\n", a % b);

    printf("----------------Comparison Operators----------------\n");

    printf("a==b: %d\n", a==b);
    printf("a!=b: %d\n", a!=b);
    printf("a>b: %d\n", a>b);
    printf("a<b: %d\n", a<b);
    printf("a>=b: %d\n", a>=b);
    printf("a<=b: %d\n", a<=b);

    printf("----------------Logical Operators----------------\n");

    printf("a&&b: %d\n", a&&b); // Logical AND
    printf("a||b: %d\n", a||b); // Logical OR
    printf("!a: %d\n", !a); // Logical NOT
    printf("!c: %d\n", !c); // Logical NOT


}