#include <stdio.h>
#include <malloc.h>
     struct node
    {
        int numb;
        struct node *next;
    };
    int option;
    struct node *start=NULL;
    struct node *create_all(struct node *);
    struct node *check_asce(struct node *);

int main()
{
    printf("\nenter elements\n");
    start = create_all(start);
    printf("\nAfter check\nresult is\n");
    start = check_asce(start);
    return 0;
}
    struct node *create_all(struct node *start)
        {
            int n;
            struct node *ptr,*temp;
           // ptr=start;
            printf("\nEnter data");
            printf("\nPress -1 to end\n");
            scanf("%d",&n);
            while(n!=-1)
            {
                if(start==NULL)
                {
                 ptr=(struct node *)malloc(sizeof(struct node));
                    ptr->numb = n;
                    ptr->next = NULL;
                    start = ptr;
                }
                else 
             {
                 temp=start;
                  while(temp->next!=NULL)
                  temp = temp->next;
                    ptr=(struct node *)malloc(sizeof(struct node));
                   ptr->numb=n;
                   ptr->next = NULL;     
                   temp->next = ptr;   
             }    
             scanf("%d",&n);
            }
            return start;
        }
        struct node *check_asce(struct node *start)
{
            struct node *ptr,*temp;
            int count=1,check=1;
            printf("\n");
            ptr=start;
            
            while(ptr->next!=NULL)
            {
              // if(ptr->numb >= ptr->next->numb)
               count++;
               ptr=ptr->next;
            }
            temp = start;
            while(temp->next!=NULL)
            {
               if(temp->numb <= temp->next->numb)
               check++;
               temp=temp->next;
            }
            if(check == count)
            printf("\nYes");
            else 
            printf("\nNo");
            return start;
  }