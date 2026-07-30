#include<stdio.h>

void update(int *x){

    *x = 100;
}

int main(){

    int a =5;
    update(&a);
    printf("%d",a);


    return 0;
}