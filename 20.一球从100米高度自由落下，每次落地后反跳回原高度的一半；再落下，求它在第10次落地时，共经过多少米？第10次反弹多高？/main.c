#include <stdio.h>
#include <stdlib.h>

//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

#define COUNT 10//计算次数

int main()
{
    double height=100;
    double sum_displacement=height;

    int drop;
    for(drop=1;drop<COUNT;drop++)
    {
//        sum_displacement+=height;
        height/=2;
        sum_displacement+=2*height;

//        printf("%d次反弹共经过%.10lf米  第%d次反弹%.10lf米\n",drop+1,sum_displacement,drop+1,height);

    }

    printf("%d次反弹共经过%.7lf米  第%d次反弹%.7lf米\n",COUNT,sum_displacement,COUNT,height);
    return 0;
}
