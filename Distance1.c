#include<stdio.h>
int main(){

float kilometer;

printf("----------------------------------------\n");

printf("Enter the distance in kilometers: ");
scanf("%f", &kilometer);

printf("Miles: %.2f\n", kilometer * 0.621371);
printf("Meters: %.2f\n", kilometer * 1000);
printf("Centimeters: %.2f\n", kilometer * 100000);

printf("----------------------------------------\n");
printf("\n");

float celsius;

printf("----------------------------------------\n");
printf("Enter the temperature in Celsius: ");
scanf("%f", &celsius);

printf("Fahrenheit: %.2f\n", (celsius * 9.0 / 5.0) + 32);
printf("Kelvin: %.2f\n", celsius + 273.15);

printf("----------------------------------------\n");
printf("\n");


    return 0;
}
