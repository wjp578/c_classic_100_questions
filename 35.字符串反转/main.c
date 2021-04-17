#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。

int main()
{
    printf("请输入字符串：");
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
