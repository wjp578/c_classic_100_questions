#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ַ�����ת���罫�ַ��� "www.runoob.com" ��תΪ "moc.boonur.www"��

int main()
{
    printf("�������ַ�����");
    char str[1000]={0};
    scanf("%s",str);

    int sz=strlen(str);

    char *left=str;
    char *right=str+sz-1;

    while(left<right)
    {
        char temp=*left;
        *left=*right;
        *right=temp;
        left++;
        right--;
    }

    printf("%s",str);

    return 0;
}
