#include <stdio.h>
#include <stdlib.h>

//有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。

int main()
{
    int num;
	printf("输入人数：");
	scanf("%d",&num);
	int p_num=num;

	int *circle=(int*)calloc(21,4);
	int *circle_cur=circle;
	int arr[3]={1,2,3};
	int *arr_cur=arr;

//	printf("%d",sizeof(circle));

    //只有一个玩家时退出循环
    while(num>1)
    {
        //判断当前元素？=3
        //==3--该人已退出圈--查看下一个元素
        //！=3--该人在圈中--游戏继续
        if(*circle_cur==3)
            circle_cur++;

        else
        {
            //若arr已指到3，复制后让其指到首元素，且该玩家（报数字3）退出游戏
            if(*arr_cur==3)
            {
                *circle_cur=*arr_cur;
                arr_cur=arr;
                circle_cur++;
                num--;
            }

            //非3，报数（赋值），后移（下一个玩家）
            else
            {
                *circle_cur=*arr_cur;
                circle_cur++;
                arr_cur++;
            }
        }

        //检测circle是否指到末尾位置
        if(circle_cur==circle+p_num)
            circle_cur=circle;
    }

    //遍历数组
    //打印查看每个玩家
    //打印存货玩家下标
    int i=0,survive_player=-1;
    for(i=0;i<p_num;i++)
        {
//            printf("%d ",*(circle+i));

            if(survive_player==-1)
            {
                if(*(circle+i)!=3)
                    survive_player=i+1;
            }
        }

    printf("\n留下玩家为 %d号 玩家\n",survive_player);



	free(circle);
	circle=NULL;

	return 0;
}
