#include<stdio.h>
int main() {

    printf("----------------------------------------\n");
    printf("Distance Converter\n");
    printf("\n");

    float kilometer;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometer);

    float miles = kilometer * 0.621371;
    float meters = kilometer * 1000;
    float centimeters = kilometer * 100000;
    
    printf("\n");

    printf("Distance in Miles: %.2f\n", miles);
    printf("Distance in Meters: %.2f\n", meters);
    printf("Distance in Centimeters: %.2f\n", centimeters);

    printf("\n");
    printf("----------------------------------------\n");
    printf("\n");

    printf("----------------------------------------\n");
    printf("Temperature Converter\n");
    printf("\n");

    float celsius;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9/5) + 32;
    float kelvin = (celsius + 273.15);

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    printf("Temperature in Kelvin: %.2f\n", kelvin);

    printf("\n");
    printf("----------------------------------------\n");
    printf("\n");


    return 0;
    
}

