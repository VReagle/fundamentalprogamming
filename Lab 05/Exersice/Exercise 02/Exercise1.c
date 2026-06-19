#include<stdio.h>

void displayDeveloperInfo(char name[], char index[], char course[]){

    printf("\nDeveloped By: %s \n", name);
    printf("Index Number: %s \n", index);
    printf("Course: %s \n", course);

}

int main(){

    char n[20],i[20],c[50];

    printf("Enter your Name: ");
    scanf(" %[^\n]", n);

    printf("Enter your Index: ");
    scanf(" %[^\n]", i);

    printf("Enter your Course: ");
    scanf(" %[^\n]", c);

    displayDeveloperInfo(n,i,c);

    return 0;
}