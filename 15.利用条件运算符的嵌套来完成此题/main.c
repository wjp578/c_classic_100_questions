#include <stdio.h>
#include <stdlib.h>

//���������������Ƕ������ɴ��⣺
//ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��

int main()
{
    int x=34;//��ֵ
    char ch;

    ch=x>=90?'A':(x<60?'C':'B');

    printf("%c",ch);
    return 0;
}
