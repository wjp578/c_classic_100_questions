#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//输出特殊图案，请在c环境中运行，看一看，Very Beautiful!

int main()
{
    int i,j;
    SetConsoleOutputCP(437);
    char a=176,b=219;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j||(i+j+1)==5)
                printf("%c",b);
            else
                printf("%c ",a);
        }
        printf("\n");
    }
    return 0;
}

//{
//    char a=176,b=219;
//    printf("%c%c%c%c%c\n",b,a,a,a,b);
//    printf("%c%c%c%c%c\n",a,b,a,b,a);
//    printf("%c%c%c%c%c\n",a,a,b,a,a);
//    printf("%c%c%c%c%c\n",a,b,a,b,a);
//    printf("%c%c%c%c%c\n",b,a,a,a,b);
//    return 0;
//}
