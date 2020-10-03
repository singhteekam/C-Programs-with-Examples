#include<stdio.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;
};
void insertStart(struct node **s,int data);

void insertLast(struct node **s,int data);

void insertAfter(struct node **s,struct node *ptr,int data);

struct node* find(struct node **s,int data);

int deleteFirst(struct node **s);

int deleteLast(struct node **s);

int deleteIntermediate(struct node **s,struct node *ptr);

void viewList(struct node **s);

int getFirst(struct node **s);

int getLast(struct node **s);

main()
{
    struct node *ptr;
    struct node *start=NULL;

    insertStart(&start,10);
    insertLast(&start,20);
    ptr=find(&start,10);
    insertAfter(&start,ptr,30);
    printf("First value is %d",getFirst(&start));
    printf("\nLast value is %d\n",getLast(&start));

    deleteIntermediate(&start,find(&start,30));

    deleteFirst(&start);
    deleteLast(&start);

    viewList(&start);
}

int getLast(struct node **s)
{
    struct node *t;
    if(*s==NULL)
    {
        printf("List is empty");
        return -1;
    }
    else
    {
        t=*s;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        return(t->info);
    }
}

int getFirst(struct node **s)
{
    if(*s==NULL)
    {
        printf("List is empty");
        return -1;
    }
    else
    {
        return((*s)->info);
    }
}

void viewList(struct node **s)
{
    struct node *t;
    if(*s==NULL)
    {
        printf("List is empty");
    }
    else
    {
        t=*s;
        while(t!=NULL)
        {
            printf("%d",t->info);
            t=t->next;
        }
    }
}

int deleteIntermediate(struct node **s,struct node *ptr)
{
    if(*s==NULL)
    {
        return 0;
    }
    if(ptr->prev==NULL)
    {
        *s=ptr->next;
        free(ptr);
        return 1;
    }
    if(ptr->next==NULL)
    {
        ptr->prev->next=ptr->next;
        free(ptr);
        return 1;
    }
}

int deleteLast(struct node **s)
{
    struct node *t;
    if(*s==NULL)
    {
        return 0;
    }
    t=*s;

    while(t->next!=NULL)
    {
        t=t->next;
        if((*s)->next==NULL)
        {
            *s=NULL;
        }
        else
        {
            t->prev->next=NULL;
        }
        free(t);
        return 1;

    }
}

int deleteFirst(struct node **s)
{
    struct node *t;
    if(*s==NULL)
    {
        return 0;
    }
    else
    {
        t=*s;
        *s=(*s)->next;
        (*s)->prev=NULL;
        free(t);
        return 1;
    }
}

struct node* find(struct node **s,int data)
{
    struct node *t;
    if(*s==NULL)
    {
        return(NULL);
    }
    else
    {
        t=*s;
        while(t!=NULL)
        {
            if(t->info==data)
                return t;
            t=t->next;
        }
        return(NULL);
    }
};

void insertAfter(struct node **s,struct node *ptr,int data)
{
    struct node *p;
    if(ptr==NULL)
    {
        printf("Invalid insertion");
    }
    else
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->info=data;
        p->prev=ptr;
        p->next=ptr->next;

        if(ptr->next!=NULL)
        {
            ptr->next->prev=p;
        }
        ptr->next=p;
    }
}

void insertLast(struct node **s,int data)
{
    struct node *p,*t;
    p=(struct node*)malloc(sizeof(struct node));
    p->info=data;
    p->next=NULL;

    if(*s==NULL)
    {
        p->prev=NULL;
        *s=p;
    }
    else
    {
         t=*s;

         while(t->next!=NULL)
            t=t->next;
         p->prev=t;
         t->next=p;
    }
}

void insertStart(struct node **s,int data)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->info=data;
    p->prev=NULL;
    p->next=*s;
    *s=p;
}
