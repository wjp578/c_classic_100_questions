#include <stdio.h>
#include <stdlib.h>

//���ַ�������
int length(char *s)
{
    int i=0;
    while(*s!='\0')
    {
        i++;
        s++;
    }
    return i;
}

int main()
{
    int len;
    char str[20];
    printf("�������ַ���:\n");
    scanf("%s",str);
    len=length(str);
    printf("�ַ����� %d ���ַ���",len);
    return 0;
}
