#include <stdio.h>
#include <stdlib.h>

//���9*9�ھ���

int main(void)
{
    int i, j;
    for(i = 1;i < 10; i++)
    {
        for(j = 1;j <= i; j++)
        {
            printf("%d��%d=%-3d",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
