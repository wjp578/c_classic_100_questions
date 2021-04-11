#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(437);
    char a=219;
    printf("\1\1\n");
    int i,j;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=i;j++)
        printf("%c",a);
        printf("\n");
    }
    return 0;
}
