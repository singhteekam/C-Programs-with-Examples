#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
}*head;

void beginInsert();
void lastInsert();
void beginDelete();
void lastDelete();
void display();
void search();

void main()
{
    int choice=0;
    while(choice!=7)
    {
        printf("\nMAIN MENU\n");
        printf("\n1.insertBegin\n2.lastInsert\n3.beginDelete\n4.lastDelete\n5.display\n6.search\n7.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:beginInsert();break;
            case 2:lastInsert();break;
            case 3:beginDelete();break;
            case 4:lastDelete();break;
            case 5:display();break;
            case 6:search();break;
            case 7:exit(1);break;
            default:printf("ENTERED INVALID CHOICE");
        }
    }
}

void beginInsert()
{
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    int item;
    if(ptr==NULL)
        printf("OVERFLOW\n");
    else
    {
        printf("Enter item\n");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
            ptr->prev=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
                temp=temp->next;
            temp->next=ptr;
            ptr->prev=head;
            head->prev=ptr;
            ptr->next=head;
            head=ptr;
        }
        printf("NODE INSERTED\n");
    }

}

void lastInsert()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("OVERFLOW\n");
    else
    {
        printf("Enter value\n");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
            ptr->next=head;
            ptr->prev=head;
            head=ptr;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
                temp=temp->next;
            temp->next=ptr;
            ptr->prev=temp;
            ptr->next=head;
            head->prev=ptr;
        }
        printf("NODE INSERTED\n");
    }

}

void beginDelete()
{
    struct node *ptr,*temp;
    if(head==NULL)
        printf("UNDERFLOW\n");
    else if(head->next==head)
    {
        head=NULL;
        free(head);
        printf("NODE DELETED\n");
    }
    else
    {
        temp=head;
        while(temp->next!=head)
            temp=temp->next;
        temp->next=head->next;
        head->next->prev=temp;
        free(head);
        head=temp->next;
        printf("NODE DELETED\n");
    }
}

void lastDelete()
{
    struct node *ptr;
    if(head==NULL)
        printf("UNDERFLOW\n");
    else if(head->next==head)
    {
        head=NULL;
        free(head);
        printf("NODE DELETED");
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->prev->next=head;
        head->prev=ptr->prev;
        free(ptr);
        printf("NODE DELETED\n");

    }
}

void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
        printf("NOTHING TO PRINT\n");
    else
    {
        while(ptr->next!=head)
        {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
        }
        printf("%d",ptr->data);
    }
}

void search()
{
    struct node *ptr;
    int i=0,item,flag;
    ptr=head;
    if(ptr==NULL)
        printf("EMPTY LIST\n");
    else
    {
        printf("Enter value\n");
        scanf("%d",&item);
        while(ptr->next!=head)
        {
            if(ptr->data==item)
            {
                printf("FOUND at %d POSITION\n",i+1);
                flag=0;
                break;
            }
            else
                flag=1;
            i++;
            ptr=ptr->next;
        }
        if(flag==1)
            printf("NOT FOUND\n");
    }
}
