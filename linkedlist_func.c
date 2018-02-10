#include<stdio.h>
#include<stdlib.h>
struct n
{
    int data;
    struct n *next;
};
typedef struct n node;
 node *head,*first,*second,*third,*temp;
void display();
int main()
{
    int n1,n2,n3,n4;
    head=(node*)malloc(sizeof(node));
    first=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    head->data=n1;
    head->next=first;
    first->data=n2;
    first->next=second;
    second->data=n3;
    second->next=third;
    third->data=n4;
    third->next=NULL;
    temp=head;
    display();
    return 0;
}
void display()
{
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
