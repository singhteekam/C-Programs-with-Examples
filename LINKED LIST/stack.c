
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();

struct node
{
    int val;
    struct node *next;

}*head;

void main()
{
    int choice=0;
    printf("Stack operations\n");
    while(choice!=4)
    {
        printf("\npush\npop\nshow\nexit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            case 4:printf("exiting.....");break;
        }
    }

}

void push()
{
    int val;
    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    if(ptr==NULL)
    {
        printf("NOT ABLE TO PUSH");

    }
    else
    {
        printf("Enter value");
        scanf("%d",&val);
        if(head==NULL)
        {
            ptr->val=val;
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->val=val;
            ptr->next=head;
            head=ptr;
        }
        printf("ITEM PUSHED");
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if(head==NULL)
        printf("Underflow");
    else
    {
        item=head->val;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("ITEM POPPED");
    }
}

void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
        printf("STACK EMPTY");
    else
    {
        printf("PRINTING STACK\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->val);
            ptr=ptr->next;
        }
    }
}
