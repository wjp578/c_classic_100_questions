#include <stdio.h>
#include <stdlib.h>

//ɾ��һ���ַ����е�ָ����ĸ���磺�ַ��� "aca"��ɾ�����е� a ��ĸ��

int main()
{
    char ch;
    int i, j;
    char s[] = "ssssssa";
    puts(s);
    printf("������Ҫɾ������ĸ: ");
    scanf("%c", &ch);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ch)
        {
            for (j = i; s[j] != '\0'; j++)
            {
                s[j] = s[j + 1];
            }
            s[j] = '\0';
            i--;
        }
    }
    puts(s);
    return 0;
}
