#include <stdio.h>
#include <stdlib.h>

//�ж�101��200֮���������

#define ScopeOfLeft 1
#define ScopeOfRight 20

int main()
{
    int i=ScopeOfLeft;
    for(i=ScopeOfLeft;i<=ScopeOfRight;i++)
    {
        int flag=0;
        int first=2;
        for(;first<i;first++)
        {
            if(i%first==0)
                flag=1;
        }

        if(flag==0&&i!=1)
            printf("%d ",i);
    }

    return 0;
}
