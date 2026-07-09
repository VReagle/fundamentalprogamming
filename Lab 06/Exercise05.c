#include<stdio.h>
int main(){

    int A[3][2], B[3][2], C[3][2];
    int raw,col;

    printf("Matix A \n");

    for (raw = 0; raw < 3; raw++)
    {
        for (col = 0; col < 2; col++)
        {
            scanf("%d",&A[raw][col]);
        }
        
    }

    printf("Matix B \n");

    for (raw = 0; raw < 3; raw++)
    {
        for (col = 0; col < 2; col++)
        {
            scanf("%d",&B[raw][col]);
        }
        
    }

    for (raw = 0; raw < 3; raw++)
    {
        for (col = 0; col < 2; col++)
        {
            C[raw][col] = A[raw][col] + B[raw][col];
        }
    }

    for (raw = 0; raw < 3; raw++)
    {
        for (col = 0; col < 2; col++)
        {
            printf("%4d", C[raw][col]);
        }
        printf("\n");
    }
    return 0;
}