#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    char val;
    struct ListNode *next;
}LNode,*LinkNode;

LinkNode creat_LNode()
{
    LinkNode head=(LinkNode)malloc(sizeof(LNode));//头节点，->next为第一个元素节点
    LinkNode p=head;

    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        getchar();//吞掉回车
        LinkNode temp=(LinkNode)malloc(sizeof(LNode));
        temp->val=ch;
        p->next=temp;
        p=temp;
    }

    p->next=NULL;

    LinkNode re=head->next;
    free(head);
    head=NULL;

    return re;
}

void print_LNode(LinkNode head)
{
    LinkNode cur=head;

    while(cur != NULL || cur->next != NULL)
    {
        printf("-->%c",cur->val);
        cur=cur->next;
    }

    printf("\n");
}

void reverse_print_LNode(LinkNode cur)
{
    if(cur->next != NULL)
        reverse_print_LNode(cur->next);

    printf("-->%c",cur->val);
}

void delete_LNode(LinkNode head)
{
    LinkNode cur_next=NULL;

    while(cur_next != NULL || cur_next->next != NULL)
    {
        cur_next=head->next;
        free(head);
        head=cur_next;
    }
}

int main()
{
    LinkNode head=creat_LNode();//头指针，指向第一个元素节点
//    print_LNode(head);
    reverse_print_LNode(head);
    delete_LNode(head);

    return 0;
}
