#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,len,i,j,maxloc;
    char ptr[1000],*p;
    printf("�������������ַ������ȣ�:\n");
    scanf("%d",&n);
    getchar();
    char *str[n];
    printf("�������ַ�,ÿ���ַ��Իس�����!:\n");
    for(i=0;i<=n-1;i++)
    {
        fgets(ptr, (sizeof ptr / sizeof ptr[0]), stdin);
        len=strlen(ptr);
        str[i]=(char*)malloc(sizeof(char)*(len+1));
        strcpy(str[i],ptr);
    }
    printf("�ַ��������:\n");
    for(i=0;i<=n-1;i++)
    {
        maxloc=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(strcmp(str[j],str[maxloc])<0)
                maxloc=j;
        }
        if(maxloc!=i)
        {
            p=str[maxloc];
            str[maxloc]=str[i];
            str[i]=p;
        }
    }
    for(i=0;i<=n-1;i++)
        printf("%s\n",str[i]);
    return 0;
}

