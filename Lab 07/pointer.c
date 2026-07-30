#include<stdio.h>
int main(){
    // // A pointer is a variable that stores the memory address of another variable as its value. (we use * symbole for it.)//

    // int number = 20;
    // int *ptr; // Declare
    // ptr = &number; // Initialize
    // printf("Value of number : %d \n", number);
    // printf("Value of number : %d \n", *ptr);
    // printf("Address of number : %p \n", &ptr);
    // printf("Pointer : %p \n",ptr);


    //swapping//

    int num1 = 10, num2 =20;
    int *ptr1,*ptr2;
    int temp;  

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Before Swapping \n");
    printf("num 1 : %d num 2 : %d \n",num1,num2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After Swapping \n");
    printf("num 1 : %d num 2 : %d \n",num1,num2);



    return 0;
}
