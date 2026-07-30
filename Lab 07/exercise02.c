#include<stdio.h>
int main(){

    int num[10];
    int result = 0;
    int *ptr_num;
    int *ptr_result;
    ptr_num = num;
    ptr_result = &result;


    for (int i = 0; i < 10; i++)
    {
        printf("Enter %d Numbers: ", i+1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        *ptr_result = *ptr_result + *(ptr_num + i);
        
    }

    printf("Sum of 10 : %d", result);
    
    return 0;
}