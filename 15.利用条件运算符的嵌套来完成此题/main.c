#include <stdio.h>
#include <stdlib.h>

//利用条件运算符的嵌套来完成此题：
//学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

int main()
{
    int x=34;//初值
    char ch;

    ch=x>=90?'A':(x<60?'C':'B');

    printf("%c",ch);
    return 0;
}
