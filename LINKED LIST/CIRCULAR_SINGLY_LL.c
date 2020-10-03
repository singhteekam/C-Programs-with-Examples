#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
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
    struct node *ptr,*p;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
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

    }
    else
    {
        p=head;
        while(p->next!=head)
            p=p->next;
        ptr->next=head;
        p->next=ptr;
        head=ptr;
    }
    printf("NODE INSERTED\n");
    }
}

void lastInsert()
{
    struct node *ptr,*p;
    ptr=(struct node *)malloc(sizeof(struct node));
    int item;
    printf("Enter item\n");
    scanf("%d",&item);
    if(ptr==NULL)
        printf("OVERFLOW\n");
    else
    {
        ptr->data=item;
        if(head==NULL)
        {
              head=ptr;
            ptr->next=head;
        }
        else
        {
            p=head;
            while(p->next!=head)
            {
                p=p->next;
            }
            p->next=ptr;
            ptr->next=head;
        }
        printf("NODE INSERTED\n");
    }
}

void beginDelete()
{
    struct node *ptr,*prep;
    if(head==NULL)
        printf("UNDERFLOW\n");
    else if(head->next=head)
    {
        head=NULL;
        free(head);
        printf("NODE DELETED\n");
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        ptr->next=head->next;
        free(head);
        head=ptr->next;
        printf("NODE DELETED\n");
    }

}

void lastDelete()
{
    struct node *ptr,*prep;
    if(head==NULL)
        printf("OVERFLOW\n");
    else if(head->next==head)
    {
        head=NULL;
        free(head);
        printf("NODE DELETED\n");
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            prep=ptr;
            ptr=ptr->next;
        }
        prep->next=ptr->next;
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
        printf("%d\t",ptr->data);
    }
}

void search()
{
    struct node *ptr;
    int i=0,item,flag;
    if(head==NULL)
        printf("EMPTY LIST\n");
    else
    {
        ptr=head;
        printf("Enter item\n");
        scanf("%d",&item);
        if(ptr->next==head)
            printf("Found at %d position\n",i+1);
        else
        {
            while(ptr->next!=head)
            {
                if(ptr->data==item)
                {
                    printf("Found at %d position\n",i+1);
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

}
