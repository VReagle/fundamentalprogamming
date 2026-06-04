#include<stdio.h>
int main(){

    float balance = 25000.00;
    int option;
    float Amount;

    printf("========= SEUSL ATM =========\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("==============================\n");

    printf("----------------------------------------\n");
    printf("Enter the option: ");
    scanf("%d", &option);
    printf("----------------------------------------\n");

    printf("----------------------------------------\n");
        switch (option){

        case 1:
            printf("Balance : %.2f\n", balance);
            break;
        
        case 2:
            printf("Enter the Diposit Amount: ");
            scanf("%f", &Amount);
            balance = balance + Amount;
            printf("Balance : %.2f\n", balance);
            break;

        case 3:
            printf("Enter the Withdrawl Amount: ");
            scanf("%f", &Amount);
            balance = balance - Amount;
            printf("Balance : %.2f\n", balance);
            break;

        case 4:
            printf("Thank You!! \n");
            printf("----------------------------------------\n");
            return 0;
            break;
        
        default:
            printf("Enter the valid option \n");
            break;
        }
    printf("----------------------------------------\n");

}