#include <stdio.h>
#include <stdlib.h>

//��Ŀ��809*??=800*??+9*?? ����??�������λ��, 809*??Ϊ��λ����8*??�Ľ��Ϊ��λ����9*??�Ľ��Ϊ3λ����
//��??�������λ������809*??��Ľ����

void output(long int b, long int i){
    printf("\n%ld = 800 * %ld + 9 * %ld\n", b,i,i);
}


int main()
{
    long a=809,b,i;
    for(i = 10; i < 100; i++){
        b = i * a;
        if (b >= 1000 && b <= 10000 && 8 * i < 100 && 9 * i >= 100){
            output(b, i);
        }
    }
    return 0;
}
