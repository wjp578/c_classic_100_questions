#include <stdio.h>
#include <stdlib.h>

//��Ŀ����ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
//���磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���

#define ScopeLeft 0
#define ScopeRight 200

int main()
{
    int i, s, n, q;
    for(i = 101; i < 1000; i++)
    {
        s = 0;
        q = i;
        while(q)
        {
            n = q % 10;
            s += n*n*n;
            q /= 10;
        }
        if( s == i)
            printf("%d ", i);
    }
    return 0;
}
