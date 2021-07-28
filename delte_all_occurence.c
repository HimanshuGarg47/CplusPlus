/* a) delete the first occurence of a given character of a linked list
b) delte the last occurence of a given character
c) delete all the occurence of a given character */
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start,*com_start;
struct node *create_all(struct node *);
void display(struct node *);
struct node *delete_first_occ(struct node *);
struct node *delete_last_occ(struct node *);
struct node *delete_all_occ(struct node *);
int main()
{
   struct node *del_fir,*del_last,*del_all;
   int option;
   do
   {
       /* code */
       printf("\n1. To create linked list");
       printf("\n2. To display linked list");
       printf("\n3. To delete first occurence of linked list");
       printf("\n4. To delete last occurence ");
       printf("\n5. To delete all occurences of list");
       printf("\n6. To display delte first");
       printf("\n7. To display last occur of list");
       printf("\n8. To display all occurences of linked list");
       printf("\n9. To exit");
       scanf("%d",&option);
       switch(option)
       {
           case 1:
           start = create_all(start);
           break;
           case 2:
           display(start);
           break;
           case 3:
           del_fir=delete_first_occ(start);
           break;
           case 4:
           del_last = delete_last_occ(start);
           break;
           case 5:
           del_all = delete_all_occ(start);
           break;
           case 6:
          display(del_fir);
           break;
           case 7:
           display(del_last);
           break;
           case 8:
          display(del_all);
           break;
       }
   } while (option!=9);
   
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
                    ptr->data = n;
                    ptr->next = NULL;
                    start = ptr;
                }
                else 
             {
                 temp=start;
                  while(temp->next!=NULL)
                  temp = temp->next;
                    ptr=(struct node *)malloc(sizeof(struct node));
                   ptr->data=n;
                   ptr->next = NULL;     
                   temp->next = ptr;   
             }    
             scanf("%d",&n);
            }
            return start;
        }
 /* struct node *display_all(struct node *start)
{
            struct node *ptr;
            printf("\n");
            ptr=start;
            printf("\nElements are:-  ");
            while(ptr!=NULL)
            {
                printf("%d\t",ptr->data);
                ptr=ptr->next;
            }
         */ 

  void display(struct node *com_start)
{
            struct node *ptr;
            printf("\n");
            ptr=start;
            printf("\nElements are:-  ");
            while(ptr!=NULL)
            {
                printf("%d\t",ptr->data);
                ptr=ptr->next;
            }
             }

  struct node *delete_first_occ(struct node *start)
  {
      struct node *ptr,*temp;
      temp=start;
      free(temp);
      return start->next;
  }


struct node *delete_last_occ(struct node *start)
{
      struct node *ptr,*preptr,*last;
        ptr=start;
      while(ptr->next!=NULL)
      {
          preptr=ptr;
      ptr=ptr->next;
      }
      last = ptr;
      free(last);
      preptr->next = NULL;
      return start;       
}


struct node *delete_all_occ(struct node *start)
{
          struct node *ptr,*temp;
            ptr=start;
            while(ptr!=NULL)
            {
                temp = ptr;
                ptr=ptr->next;
                free(temp);

            }
     return start;
}