#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{

    SetConsoleOutputCP(437);
    int a=219;
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i%2==0)
                printf("%c  ",a);
            else
                printf("  %c",a);
        }
        printf("\n");
    }
}
