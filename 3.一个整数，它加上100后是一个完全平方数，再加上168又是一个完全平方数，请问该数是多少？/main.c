#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�

int main()
{
//    int  i, j, m, n, x;
//
//    for (i = 1; i < 168 / 2 + 1; i++)
//    {
//        if (168 % i == 0)
//        {
//            j = 168 / i;
//            if ( i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//            {
//                m = (i + j) / 2;
//                n = (i - j) / 2;
//                x = n * n - 100;
//                printf ("%d + 100 = %d �� %d\n", x, n, n);
//                printf ("%d + 268 = %d �� %d\n", x, m, m);
//            }
//        }
//    }

    int n,x,a,m;
    double b;

    for (n = 1; n <= 168 / 2 ; n++)
    {
        x=n*n-100;
        a=x+268;
        b=sqrt(a);
        if((int)b==b)
        {
            m=(int)b;
            printf ("%d + 100 = %d * %d\n", x, n, n);
            printf ("%d + 268 = %d * %d\n", x, m, m);
        }
    }

    return 0;
}
