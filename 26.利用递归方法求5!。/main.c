#include <stdio.h>
#include <stdlib.h>

//���õݹ鷽����5!��

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
