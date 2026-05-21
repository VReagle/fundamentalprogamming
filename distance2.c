#include<stdio.h>
int main() {
    
    printf("Distance Converter\n");
    printf("----------------------------------------\n");
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

    return 0;
    
}
