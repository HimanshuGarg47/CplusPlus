#include <stdio.h>
#include <stdlib.h>
    struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
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
void create2(int A[], int n)
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

int isLoop(struct Node *f)
{
    struct Node *p,*q;
    p = q= f;
    do{
        p = p->next;
        q = q->next;
        q = q?q->next:q;
    }while(p && q && p!=q);

    if(p==q)
    return 1;

    else 
    return 0;
}
void Merge(struct Node *p, struct Node *q)
{
    struct Node *last;
    if (p->data < q->data)
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
int main()
{

    int A[] = {10, 20, 40, 50, 60};
    int B[] = {15, 18, 25, 30, 55};
    // check loop 
    struct Node *t1,*t2;
    create(A,5);
    t1 = first ->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;
    printf("%d\n",isLoop(first));
    // create(A, 5);
    // create2(B, 5);

    // Merge(first, second);
    // Display(third);

    return 0;
}