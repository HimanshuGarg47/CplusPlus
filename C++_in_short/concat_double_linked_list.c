// program to concatenate two doubly linked list
#include <stdio.h>
#include <malloc.h>
struct node
{
    struct node *next;
    int data;
    struct node *prev;
};
struct node *fir_start,*sec_start,*concat_start,*com_start;
struct node *create_all(struct node *);
struct node *display(struct node *);
struct node *concat(struct node *,struct node *,struct node *);
int main()
{
    int option;
    do
    {
        /* code */
        printf("\n1. Create a first linked list");
        printf("\n2. Create a second linked list");
        printf("\n3. Display a first linked list");
        printf("\n4. Display a second linked list");
        printf("\n5. Concatenate two linked list");
        printf("\n6. Display concatenated list");
        printf("\n7. Exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            fir_start=create_all(fir_start);
            printf("\nFirst doubly linked list is created ");
            break;
            case 2:
            sec_start=create_all(sec_start);
            printf("\nSecond doubly linked list is created");
            break;
            case 3:
            fir_start=display(fir_start);
            break;
            case 4:
            sec_start=display(sec_start);
            break;
            case 5:
           concat_start= concat(fir_start,sec_start,concat_start);
           break;  
           case 6:
           concat_start=display(concat_start);          
        }
       // scanf("%d",&option);
            }while(option!=7);
    }
     struct node *display(struct node *com_start)
{
            struct node *ptr;
          //  printf("\n");
            ptr=com_start;
            printf("\nElements are:-  ");
            while(ptr!=NULL)
            {
                printf("%d\t",ptr->data);
                ptr=ptr->next;
            }
            return com_start;
  }

        struct node *create_all(struct node *com_start)
        {
            int n;
            struct node *ptr,*temp;
           // ptr=start;
            printf("\nEnter data");
            printf("\nPress -1 to end\n");
            scanf("%d",&n);
            while(n!=-1)
            {
                if(com_start==NULL)
                {
                 ptr=(struct node *)malloc(sizeof(struct node));
                    ptr->data = n;
                    ptr->prev=NULL;
                    ptr->next = NULL;
                    com_start = ptr;
                }
                else 
             {
                 temp=com_start;
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
            return com_start;
        }


        struct node *concat(struct node *fir_start,struct node *sec_start,struct node *concat_start)
        {
            struct node *temp,*ptr,*temp1;
            temp=fir_start;
            temp1=sec_start;
            while(temp->next!=NULL)
            temp=temp->next;
            temp->next = sec_start;
            sec_start->prev=temp;
            return fir_start;
        }
