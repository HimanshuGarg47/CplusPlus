// program to delete the first element of a doubley linked list .add this node as the last node
// program to concatenate two doubly linked list
#include <stdio.h>
#include <malloc.h>
struct node
{
    struct node *next;
    int data;
    struct node *prev;
};
struct node *fir_start;
struct node *create_all(struct node *);
struct node *display(struct node *);
struct node *concat(struct node *);
int main()
{
    int option;
    do
    {
        /* code */
                printf("\n1. Create a  linked list");
            printf("\n3. Display a  linked list");
            printf("\n6. to process doubly linked list");
                printf("\n7. Exit\n");
                scanf("%d",&option);
        switch(option)
        {
            case 1:
            fir_start=create_all(fir_start);
            printf("\nFirst doubly linked list is created ");
            break;
            case 3:
            fir_start=display(fir_start);
            break;
             case 6:
           fir_start=concat(fir_start);          
        }
            }while(option!=7);
    }
     struct node *display(struct node *fir_start)
{
            struct node *ptr;
            printf("\n");
            ptr=fir_start;
            printf("\nElements are:-  ");
            while(ptr!=NULL)
            {
                printf("%d\t",ptr->data);
                ptr=ptr->next;
            }
            return fir_start;
  }

        struct node *create_all(struct node *fir_start)
        {
            int n;
            struct node *ptr,*temp;
           // ptr=start;
            printf("\nEnter data");
            printf("\nPress -1 to end\n");
            scanf("%d",&n);
            while(n!=-1)
            {
                if(fir_start==NULL)
                {
                 ptr=(struct node *)malloc(sizeof(struct node));
                    ptr->data = n;
                    ptr->prev=NULL;
                    ptr->next = NULL;
                    fir_start = ptr;
                }
                else 
             {
                 temp=fir_start;
                 ptr=(struct node *)malloc(sizeof(struct node));
                 ptr->data=n;
                 while(temp->next!=NULL)
                temp = temp->next;
               temp->next = ptr;  
               ptr->prev=temp; 
                ptr->next = NULL; 
               
             }    
             scanf("%d",&n);
            }
            return fir_start;
        }
struct node *concat(struct node *fir_start)
{
    struct node *ptr,*temp,*sec_node;
        ptr=fir_start;   // start of doubly linked list
        temp=fir_start;
        while(temp->next!=NULL)
    temp=temp->next;             // contain last node of linked list
    temp->next=fir_start;         // next of last of node = start
    fir_start->prev=temp;             // prev of first node = last node
    ptr->next->prev=NULL; 
    sec_node = ptr->next;       // prev of second node = NULL
    ptr->next=NULL;         //   next of first node = NULL;
    return sec_node;            // return first node  
}

       