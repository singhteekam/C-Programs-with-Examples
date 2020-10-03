
#include<stdio.h>
#include<stdlib.h>
void insert();
void del();
void display();

struct node
{
    int data;
    struct node *next;

}*front,*rear;

void insert()
{
    int item;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    else
    {
        printf("ENTER VALUE\n");
        scanf("%d",&item);
        ptr->data=item;
        if(front==NULL)
        {
            front=ptr;
            rear=ptr;
            front->next=rear;
            rear->next=front;
        }
        else
        {
            rear->next=ptr;
            rear=ptr;
            rear->next=front;
        }
    }
}

void del()
{
    struct node *ptr;
    if(front==NULL)
    printf("\nUNDERFLOW\n");
    else if(front->next==front)
    {
        front=NULL;
        rear=NULL;
        free(front);
        free(rear);
    }
    else
    {
        ptr=front;
        rear->next=front->next;
        front=front->next;
        free(ptr);
    }
}

void display()
{
    struct node *ptr;
    ptr=front;
    if(front==NULL)
        printf("EMPTY");
    else
    {
        printf("PRINTING>>>>>>>>>>>\n");
        while(ptr->next!=front)
        {
            printf("\n%d\n",ptr->data);
            ptr=ptr->next;
        }
        printf("\n%d\n",ptr->data);
    }
}


void main()
{
    int choice=0;
    printf("CIRCULAR QUEUE operations\n");
    while(choice!=4)
    {
        printf("\ninsert\ndelete\nshow\nexit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();break;
            case 2:del();break;
            case 3:display();break;
            case 4:printf("exiting.....");break;
        }
    }

}
