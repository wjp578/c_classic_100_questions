#include <stdio.h>
#include <stdlib.h>

//��дinput()��output()�������룬���5��ѧ�������ݼ�¼��

typedef struct Student{
    char name[20];
    char sex[5];
    int  age;
}Stu;

void input(Stu *stu)
{
    int i;
    for(i=0;i<5;i++)
        scanf("%s%s%d",stu[i].name,stu[i].sex,&(stu[i].age));
}

void output(Stu *stu)
{
    int i;
    for(i=0;i<5;i++)
        printf("%s %s %d\n",stu[i].name,stu[i].sex,stu[i].age);
}

int main()
{
    Stu stu[5];
    printf("������5��ѧ������Ϣ������ �Ա� ����:\n");
    input(stu);
    printf("5��ѧ������Ϣ���£�\n����  �Ա�  ����\n");
    output(stu);

    return 0;
}
