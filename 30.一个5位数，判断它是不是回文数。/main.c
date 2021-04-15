#include <stdio.h>
#include <stdlib.h>


//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。

int main( )
{
    int x;
    int sum = 0;
    printf("请输入一个整数:\n");
    scanf("%d", &x);

    int i;
    for (i = x; i > 0; i /= 10)
        sum = sum * 10 + i % 10;

    if(sum == x)
        printf("%d 是回文数\n",x);
    else
        printf("%d 不是回文数\n", x);

    return 0;
}
