#include<stdio.h>
int main(){

    int isPackingAvailable;
    int isMember;
    int isEmergencyVehicle;
    int VehicleCode;
    int charge;
    float discount;
    float finalCharge;

    printf("Is packing available? (1 = Yes, 0 = No): ");
    scanf("%d", &isPackingAvailable);

    printf("Is the driver a member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    printf("Is it an emergency vehicle? (1 = Yes, 0 = No): ");
    scanf("%d", &isEmergencyVehicle);

    printf("Enter vehicle code (1 = Motorcycle, 2 = Car, 3 = Van, 4 = Bus):");
    scanf("%d", &VehicleCode);
    printf("\n");

    if (VehicleCode < 1 || VehicleCode > 4) {
        printf("Invalid vehicle code.Charge cannot be calculated.\n");
        return 1;
    }

    if (isPackingAvailable == 1 && (isMember == 1 || isEmergencyVehicle == 1)) {
        printf("Parking Status: Allowed\n");
    } else {
        printf("Parking Status: Not Allowed\n");
        return 1;
    }

    switch (VehicleCode) {
        case 1:
            printf("Vehicle Type: Motorcycle\n\n");
            charge = 100;

            if(isMember == 1) {
                discount = charge * 0.10;
                finalCharge = charge - discount;

                printf("Original Charge: %d\n", charge);
                printf("Discount: %.2f\n", discount);
                printf("Final Charge: %.2f\n", finalCharge);

            } else {
                discount = 0;
                finalCharge = charge;
                printf("Final Charge: %d\n", charge);
            }

            break;

        case 2:
            printf("Vehicle Type: Car\n\n");
            charge = 300;

            if(isMember == 1) {
                discount = charge * 0.10;
                finalCharge = charge - discount;

                printf("Original Charge: %d\n", charge);
                printf("Discount: %.2f\n", discount);
                printf("Final Charge: %.2f\n", finalCharge);

            } else {
                discount = 0;
                finalCharge = charge;
                printf("Final Charge: %d\n", charge);
            }
            break;

        case 3:
            printf("Vehicle Type: Van\n\n");
            charge = 500;

            if(isMember == 1) {
                discount = charge * 0.10;
                finalCharge = charge - discount;

                printf("Original Charge: %d\n", charge);
                printf("Discount: %.2f\n", discount);
                printf("Final Charge: %.2f\n", finalCharge);

            } else {
                discount = 0;
                finalCharge = charge;
                printf("Final Charge: %d\n", charge);
            }
            break;
        case 4:
            printf("Vehicle Type: Bus\n\n");
            charge = 800;

            if(isMember == 1) {
                discount = charge * 0.10;
                finalCharge = charge - discount;

                printf("Original Charge: %d\n", charge);
                printf("Discount: %.2f\n", discount);
                printf("Final Charge: %.2f\n", finalCharge);

            } else {
                discount = 0;
                finalCharge = charge;
                printf("Final Charge: %d\n", charge);
            }

            break;

        default:
            printf("Vehicle Type: Unknown\n\n");
            break;
    

            return 0;

    }

}