#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0b1111;
    printf("%d\n",a);

    a<<=3;
    printf("%d\n",a);

    int c=0b1111000;
    printf("%d\n",c);

    int b=0b10000000000011111101010101110101;
    printf("%d\n",b);

    b=a&b;
    printf("%x\n",b);

    return 0;
}
