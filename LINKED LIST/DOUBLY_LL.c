#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
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
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("Can't inserted\n");
    else
    {
        printf("enter item\n");
        scanf("%d",&item);
        if(head==NULL)
        {
            ptr->data=item;
            ptr->next=NULL;
            ptr->prev=NULL;
            head=ptr;
        }
        else
        {
            ptr->data=item;
            ptr->next=head;
            ptr->prev=NULL;
            head->prev=ptr;
            head=ptr;
        }
    }
}

void lastInsert()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("OVERFLOW\n");
    else
    {
        printf("Enter item\n");
        scanf("%d",&item);
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=ptr;
        ptr->prev=temp;
        ptr->data=item;
        ptr->next=NULL;

    }
    printf("NODE INSERTED\n");
}

void randomInsert()
{
    struct node *ptr,*p;
    int i,loc,item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
        printf("OVERFLOW\n");
    else
    {
        p=head;
        printf("Enter item and location\n");
        scanf("%d%d",&item,&loc);
        for(i=0;i<loc;i++)
        {
            p=p->next;
            if(p==NULL)
            {
                printf("Can't inserted\n");
            }
        }
        ptr->data=item;
        ptr->next=p->next;
        ptr->prev=p;
        p->next=ptr;
        p->next->prev=ptr;

    }
    printf("NODE INSERTED\n");
}

void beginDelete()
{
    struct node *ptr;
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
        ptr=head;
        head=head->next;
        head->prev=NULL;
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
        free(ptr);
        printf("NODE DELETED\n");
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->prev->next=NULL;
        free(ptr);
        printf("NODE Deleted\n");
    }
}

void randomDelete()
{
    struct node *ptr,*p;
    int i,item;
    printf("Enter item\n");
    scanf("%d",&item);
    ptr=head;
    while(ptr->data!=item)
        ptr=ptr->next;
    if(ptr->next==NULL)
        printf("Can't deleted\n");
    else if(ptr->next->next==NULL)
        ptr->next=NULL;
    else{
        p=ptr->next;
        ptr->next=p->next;
        p->next->prev=ptr;
        free(ptr);
        printf("NODE DELETED\n");
    }
}

void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("%d\t",ptr->data);
}

void search()
{
    struct node *ptr;
    int item,flag=0;
    printf("Enter item\n");
    scanf("%d",&item);
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==item)
        {
            printf("FOUND\n");
            flag=1;
            break;
        }
        ptr=ptr->next;
    }
    if(flag==0)
        printf("NOT FOUND\n");
}
