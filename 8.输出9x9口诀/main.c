#include <stdio.h>
#include <stdlib.h>

//Êä³ö9*9¿Ú¾÷¡£

int main(void)
{
    int i, j;
    for(i = 1;i < 10; i++)
    {
        for(j = 1;j <= i; j++)
        {
            printf("%d¡Á%d=%-3d",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
