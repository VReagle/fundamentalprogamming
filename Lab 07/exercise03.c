#include<stdio.h>
int main(){

    int array[3][3] = {

        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    int (*ptr)[3] = array;
    int i,j;
    int sum = 0;
    printf("Address of array : %p \n",(void*)ptr);

    printf("Address of row : \n");
    for (int i = 1; i <= 3; i++)
    {
        printf("Row %d address : %p \n",i,(void*)(ptr+i));
    }
    
    printf("Address of column : \n");
    for (int j = 1; j <= 3; j++)
    {
        printf("Row %d address : %p \n",j,(void*)(ptr+j));
    }

    printf("Address of element : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%p \t", (void*)(*(ptr + i) + j));
        }
        printf("\n");
    }

    printf("Value of element : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", *(*(ptr + i) + j));
            sum += *(*(ptr + i) + j);
        }
        printf("\n");
    }
    
    printf("\n Sum : %d",sum);

    return 0;   
}