#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first;
 
 int length(struct Node *p)
 {
     if(p == NULL)
     return 0;
     int i = 0;
     for(;p!=NULL;i++)
     {
         p = p->next;
     }
     return i+1;
 }
void create(int A[],int n)
{
    struct Node *last,*p,*t;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->prev = first->next = NULL;
    first->data = A[0];
    last = first;

    for(int i= 1;i<n;i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

int delete(struct Node *p,int index)    
{
    struct Node *t;

    if(index == 0)
    {
        t = p->next;
        p = t;
        p->prev = NULL;
        first = p;

    }
    else
    {
        int i = 0;
        for(;i<index-1;i++)
        {
            p = p->next;

        }
        p->prev->next = p->next;
        if(p->next)
        {
            p->next->prev = p->prev;
            free(p);
        }
        
    }

}
void insert(struct Node *p,int index,int value)
{
    if(index < 0 && index > length(p))
    return;
    struct Node *t;
    if(index == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = value;
        t->prev = NULL;
        t->next = p;
        p->prev = t;
        first = t;
    }
    else
    {
        for(int i = 0;i<index-1;i++)
        {
            p = p->next;
        }
         t = (struct Node *)malloc(sizeof(struct Node));
        t->data = value;
        t->prev = p;
        t->next = p->next;
        p->next = t;
        if(t->next)
        {
            t->next->prev = t;
        }
        
    }
}

void Reverse(struct Node *p)
{
    struct Node *temp;
    while(p!=NULL)
    {
        temp = p->next;
        p->next  = p->prev;
        p->prev = temp;
        p  =  p->prev;
        if(p!=NULL && p->next==NULL)
        first = p;
    }
}
void Display(struct Node *head)
{
    if(head!=NULL)
    {
        printf("%d ",head->data);
        Display(head->next);
    }
}
int main()
{
    int A[] = {1,2,3,4,5,6};
    create(A,6);
    insert(first,6,10);
    delete(first,2);
    Reverse(first);
    Display(first);


}