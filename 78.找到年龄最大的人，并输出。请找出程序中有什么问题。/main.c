#include <stdio.h>
#include <stdlib.h>

//找到年龄最大的人，并输出。请找出程序中有什么问题。

struct man{
    char name[20];
    int  age;
}

person[3]={{"li",25},{"wang",25},{"sun",25}};

int main()
{
    struct man *q,*p;
    int i,m=0,k=0;
    p=q=person;
    for(i=0;i<3;i++)
    {
        if(m<p->age)
        {
            m=p->age;
            q=p;
            k=i;
        }
        p++;
    }
    for(;k<3;k++)
    {
        if(person[k].age>=m)
            printf("%s %d\n",person[k].name,person[k].age);
    }
    return 0;
}
