
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
            front->next=NULL;
            rear->next=NULL;
        }
        else
        {
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }
    }
}

void del()
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    printf("\nUNDERFLOW\n");
    else
    {
        ptr=front;
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
        while(ptr!=NULL)
        {
            printf("\n%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}


void main()
{
    int choice=0;
    printf("QUEUE operations\n");
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
