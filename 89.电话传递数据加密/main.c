#include <stdio.h>
#include <stdlib.h>

#define SIZE 40

int main()
{
   char num[SIZE];
   int n,i,j=0,k;
   puts("��������ܵ����֣�");
   scanf("%d",&n);
   while(n)
   {
    i=n%10;
    num[j++]=i;
    n/=10;
   }
   printf("���ܺ������Ϊ��");
   for(k=0;k<j;k++)
   {
    num[k]=(num[k]+5)%10;
    printf("%d",num[k]);
   }
   return 0;
}
