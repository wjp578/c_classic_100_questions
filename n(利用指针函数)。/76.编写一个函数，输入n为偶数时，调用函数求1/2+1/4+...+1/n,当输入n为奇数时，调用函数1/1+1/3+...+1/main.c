#include <stdio.h>
#include <stdlib.h>

//��дһ������������nΪż��ʱ�����ú�����1/2+1/4+...+1/n
//������nΪ����ʱ�����ú���1/1+1/3+...+1/n(����ָ�뺯��)��

double  evenumber(int n);
double  oddnumber(int n);

int main()
{
    int n;
    double r;
    double (*pfunc)(int);
    printf("������һ�����֣�");
    scanf("%d",&n);
    if(n%2==0) pfunc=evenumber;
    else pfunc=oddnumber;

    r=(*pfunc)(n);
    printf("%lf\n",r);

    return 0;
}
double  evenumber(int n)
{
    double s=0,a=0;
    int i;
    for(i=2;i<=n;i+=2)
    {
        a=(double)1/i;
        s+=a;
    }
    return s;
}
double  oddnumber(int n)
{
    double s=0,a=0;
    int i;
    for(i=1;i<=n;i+=2)
    {
        a=(double)1/i;
        s+=a;
    }
    return s;
}
