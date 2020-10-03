#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
} *head;
int getnode(int x)
{struct node *ptr=NULL,*temp=NULL;
int i;
head=(struct node *)malloc(sizeof(struct node));
scanf("%d",&head->data);
head->next=NULL;
temp=head;
for (i=1;i<x;i++)
{ptr=(struct node *)malloc(sizeof(struct node));
 scanf("%d",&ptr->data);
 ptr->next=NULL;
 temp->next=ptr;
 temp=temp->next;(struct node *)malloc(sizeof(struct node));

}temp->next=head;

}
int main()
{int n;
struct node *ptr;
scanf("%d",&n);
getnode(n);
ptr=head;
while (ptr->next!=head)
{
 printf("%d ",ptr->data);

 ptr=ptr->next;
}printf("%d ",ptr->data);
}
