#include <stdio.h>
#include <stdlib.h>
struct Poly 
{
    int coeff;
    int exp;
    struct Poly *next;
}*first = NULL;

void create(int n)
{
    struct Poly *p,*temp;
    
    for(int i = 0;i<n;i++)
    {
       p = (struct Poly *)malloc(sizeof(struct Poly));
       printf("Enter coeffiecient and exponent\n");
       scanf("%d %d",&p->coeff,&p->exp);
       p->next = NULL;
       if(first == NULL)
       {
           first = p;
           temp = first;
       }
       else
       {
           temp->next = p;
           temp = p;
       }
    }

}
    void Display(struct Poly *p)
    {
        if(p!=NULL)
        {
            if(p->next == NULL)
                        printf("%dx%d ",p->coeff,p->exp);
            else
            printf("%dx%d + ",p->coeff,p->exp);
            Display(p->next);
        }
    }

int main()
{
    int n;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    create(n);
    Display(first);
}