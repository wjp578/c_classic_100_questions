#include <stdio.h>
#include <stdlib.h>

//��10������������

#include <stdio.h>

typedef void (*p_func)(int *, int);

void select_sort(int  *arr, int size)   //ѡ������
{
    int i = 0, j = 0;
    for(i = 0; i < size; i++)
    {
        for(j = i; j < size; j++)
        {
            if(arr[i] > arr[j] )
            {
                arr[i] ^= arr[j];
                arr[j] ^= arr[i];
                arr[i] ^= arr[j];
            }
        }
    }
}

void bubble_sort(int *arr, int size)    //ð������
{
    int i = 0, j = 0;
    for(i = 1; i < size; i++)
    {
        for(j = 0; j < size - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                arr[j] ^= arr[j+1];
                arr[j+1] ^= arr[j];
                arr[j] ^= arr[j+1];
            }
        }
    }
}
void quick_sort(int *arr, int size)     //��������
{
    if(size <= 1)
        return;
    int base = *arr;
    int head = 0, tail = size - 1;
    while(head < tail)
    {
        if(arr[head] > arr[tail])
        {
            arr[head] ^= arr[tail];
            arr[tail] ^= arr[head];
            arr[head] ^= arr[tail];
        }
        if(arr[head] == base)
            tail--;
        else head++;
    }
    quick_sort(arr, head - 1);
    quick_sort(&arr[head + 1], size - head - 1);
}
int main()
{
    int arr[] = {0, 4, 2, 8, 6, 1, 5, 9, 3, 7};
    int i = 0, j = 0;
    p_func p_sort[] = {select_sort, bubble_sort, quick_sort};
    for(i = 0; i <= 2; i++)
    {
        p_sort[i](arr, sizeof(arr)/sizeof(int));
        i == 0 ? printf("select : ") : i == 1 ? printf("bubble : ") : printf("quick  : ");
        for(j = 0; j < sizeof(arr)/sizeof(int); j++)
            printf("%d  ", arr[j]);
        printf("\n");
    }

    return 0;
}
