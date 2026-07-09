#include<stdio.h>
int main(){

    char ch[10];

    printf("\nEnter 10 English Characters\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d . ", i+1);
        scanf(" %c", &ch[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
           printf("%d . %c is Uppercace \n", i+1, ch[i]);
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            printf("%d . %c is Lowercase \n", i+1, ch[i]);
        }

    }
    return 0;
}