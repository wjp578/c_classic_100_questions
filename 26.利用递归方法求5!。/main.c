#include <stdio.h>
#include <stdlib.h>

//利用递归方法求5!。

int test(int a)
{
    if(a==0)
        return 1;
    else
        return test(a-1)*a;
}

int main()
{
    printf("%d",test(5));
    return 0;
}
