#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=0,i=0;
    char s[20];
    printf("������һ��8������:\n");
    gets(s);
    while(s[i]!='\0'){
        n=n*8+s[i]-'0';
        i++;
    }
    printf("�������8������ת��Ϊʮ����Ϊ\n%d\n",n);

    return 0;
}
