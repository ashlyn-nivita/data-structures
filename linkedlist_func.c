#include<stdio.h>
#include<stdlib.h>
struct n
{
    int data;
    struct n *next;
};
typedef struct n node;
 node *head,*first,*second,*third,*temp;
int display(int);
int main()
{
    head=(node*)malloc(sizeof(node));
    first=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=NULL;
    temp=head;
    display(head);
}
int display(int head)
{
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
