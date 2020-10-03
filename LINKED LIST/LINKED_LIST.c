#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void beginInsert();
void lastInsert();
void randomInsert();
void beginDelete();
void lastDelete();
void randomDelete();
void display();
void search();

void main()
{
    int choice=0;
    while(choice!=9)
    {
        printf("\nMAIN MENU\n");
        printf("\n1.insertBegin\n2.lastInsert\n3.randomInsert\n4.beginDelete\n5.lastDelete\n6.randomDelete\n7.display\n8.search\n9.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:beginInsert();break;
            case 2:lastInsert();break;
            case 3:randomInsert();break;
            case 4:beginDelete();break;
            case 5:lastDelete();break;
            case 6:randomDelete();break;
            case 7:display();break;
            case 8:search();break;
            case 9:exit(1);break;
            default:printf("ENTERED INVALID CHOICE");
        }
    }
}

void beginInsert()
{
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("OVERFLOW");
    else
    {
        printf("Enter value\n");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\nNODE INSERTED\n");
    }
}

void lastInsert()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("OVERFLOW");
    else
    {
        printf("Enter value\n");
        scanf("%d",&item);
        ptr->data=item;
        if(head==NULL)
        {
            ptr->next=NULL;
            head=ptr;
            printf("NODE INSERTED\n");
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=ptr;
            ptr->next=NULL;
            printf("NODE INSERTED\n");
        }
    }
}

void randomInsert()
{
    int i,loc,item;
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("OVERFLOW");
    else
    {
        printf("Enter value\n");
        scanf("%d",&item);
        ptr->data=item;
        printf("Enter position\t");
        scanf("%d",&loc);
        temp=head;
        for(i=0;i<loc;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("Can't Insert\n");
                return;
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }
}

void beginDelete()
{
    struct node *ptr;
    if(head==NULL)
        printf("UNDERFLOW\n");
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        printf("NODE DELETED\n");
    }
}

void lastDelete()
{
    struct node *ptr,*p;
    if(head==NULL)
        printf("UNDERFLOW\n");
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        printf("NODE DELETED\n");
    }
    else
    {
        p=head;
        while(ptr->next!=NULL)
        {
            p=ptr;
            ptr=ptr->next;
        }
        p->next=NULL;
        free(ptr);
        printf("NODE DELETED\n");
    }
}

void randomDelete()
{
    struct node *ptr,*p;
    int loc,i;
    printf("Enter position\n");
    scanf("%d",&loc);
    ptr=head;
    for(i=0;i<loc;i++)
    {
        p=ptr;
        ptr=ptr->next;
    if(ptr==NULL){
        printf("Can't Deleted\n");
        return;}
    }
    p->next=ptr->next;
    free(ptr);
    printf("NODE DELETED\n");
}

void search()
{
    struct node *ptr;
    int item,i,flag;
    ptr=head;
    if(ptr==NULL)
        printf("Can't search\n");
    else
    {
        printf("Enter item\n");
        scanf("%d",&item);
        while(ptr!=NULL)
        {
            if(ptr->data==item)
            {
                printf("Found at %d position\n",i+1);
                flag=1;
            }
            else
                flag=0;
            i++;
            ptr=ptr->next;
        }
        if(flag==0)
            printf("ITEM NOT FOUND\n");
    }
}

void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
        printf("EMPTY\n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
