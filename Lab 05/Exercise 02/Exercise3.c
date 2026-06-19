#include<stdio.h>

void greetUser(char name[]){

    printf("Hello, %s! Welcome to the lab", name);

}

int main(){

    char n[20];

    printf("Enter Your Name: ");
    scanf(" %s", &n);
    greetUser(n);

}