#include<stdio.h>
int main(){

int x = 5;
    if (x = 0)                     /* Bug 1 */  //if (x == 0)
        printf("Zero\n");
    else 
        printf("Non-zero\n");
    
    switch (x) { 
        case 5: 
            printf("Five\n"); 
        case 6:                    /* Bug 2: what happens here? */ 
            printf("Six\n");
    }

}