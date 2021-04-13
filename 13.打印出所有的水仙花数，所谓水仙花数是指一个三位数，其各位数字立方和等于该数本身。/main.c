#include <stdio.h>
#include <stdlib.h>

//题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
//例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。

#define ScopeLeft 0
#define ScopeRight 200

int main()
{
    int i, s, n, q;
    for(i = 101; i < 1000; i++)
    {
        s = 0;
        q = i;
        while(q)
        {
            n = q % 10;
            s += n*n*n;
            q /= 10;
        }
        if( s == i)
            printf("%d ", i);
    }
    return 0;
}
