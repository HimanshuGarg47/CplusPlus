#include <stdio.h>
#include <stdlib.h>
    struct Node
{
    int data;
    struct Node *next;
};
struct Node *first = NULL,*third = NULL, *second = NULL;

int count(struct Node *p)
{
    int count = 0;
    while(p!=NULL)
    {
        p = p->next;
        count++;
    }
    return count;
}


void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d  ", p->data);
        p = p->next;
    }
}
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create1(int A[],int n) 
{
    int i;
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


void concat(struct Node *p,struct Node *q)
{
    third = p;
    while(p->next!=NULL)
    p = p->next;
    p->next = q;
}
void Reverse1(struct Node *p)
{
    int *A,i=0;
    struct Node *q = NULL;
    q=p;
    A = (int *)malloc(sizeof(int)*count(p));
    while(q!=NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;

    while(q!=NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
    while(q!=NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

void merge(struct Node *p,struct Node *q)
{
      struct Node *last;
      if(p->data < q->data)
      {
          third = last = p;
          p = p->next;
          third->next = NULL;
      }
      else
      {
          third = last = q;
          q = q->next;
          third->next = NULL;
      }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
        last->next = p;
    if (q)
        last->next = q;
}
void Reverse2(struct Node *p)
{
    struct Node *q = NULL,*r = NULL;

    while(p!=NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;

    }
    first = q;
}


void Reverse3(struct Node *q,struct Node *p)
{
    if(p)
    {
        Reverse3(p,p->next);
        p->next = q;
    }
    else
    first = q;
}
void RemoveDuplicate(struct Node *p)
{
    struct Node *q = p->next;

    while(p!=NULL)
    {
        if(p->data!=q->data)
       { p = q;
        q = q->next;}
        else
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}
int main()
{

    int A[] = {10, 20, 20, 40, 50, 50, 50, 60};
    int B[] = {5,222,333,444,555,559};
     create(A, 8);
     create1(B,6);
     concat(first,second);

  //  merge(first,second);

    Display(third);
    // printf("\n\n\n\n\n\n");
    // Reverse3(NULL,first);
    //     Display(first);
    //     printf("\n\n");
    // Reverse2(first);
    // Display(first);

    return 0;
}