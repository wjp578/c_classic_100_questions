#include <stdio.h>
#include <stdlib.h>

//Çó1+2!+3!+...+20!µÄºÍ

int main()
{
    int i=0;
    int sum_add=0;

    for(i=1;i<=20;i++)
    {
        int sum_mul=1;
        int j=0;

        for(j=1;j<=i;j++)
        {
            sum_mul*=j;
        }

        sum_add+=sum_mul;
    }

    printf("%d",sum_add);

    return 0;
}
