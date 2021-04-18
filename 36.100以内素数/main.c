#include<stdio.h>
#include<math.h>

//100ÒÔÄÚËØÊı

int main()
{
    int i,j,k;
    for(i=2;i<=100;i++)
    {
        k=(int)sqrt(i);
        for(j=2;j<=k;j++)
            if(i%j==0) break;
        if(j>k)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
