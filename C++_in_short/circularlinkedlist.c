#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *circularlist(struct node *);
struct node *display_all(struct node *);
int main()
{
   start= circularlist(start);
   start = display_all(start);
    return 0;
}
struct node *circularlist(struct node *start)
{
    struct node *temp,*ptr;
   // ptr=start;
   int option;
   printf("Enter elements to create circular linked list\n");
   printf("\nEnter -1 to end");
   scanf("%d",&option);
   while(option!=-1)
  {
      ptr=(struct node *)malloc(sizeof(struct node));
      ptr->data=option;
      if(start==NULL)
     {
      ptr->next=ptr;
      start = ptr;
         }
         else
         {
             temp =start;
             while(temp->next!=start)
             temp=temp->next;
             temp->next = ptr;
             ptr->next = start;
         }
    scanf("%d",&option);
      
  }
  return start;
}

struct node *display_all(struct node *start)
{
            struct node *ptr;
            printf("\n");
            ptr=start;
            printf("\nElements are:-  ");
            do
            {
                printf("%d\t",ptr->data);
                ptr=ptr->next;
          }while(ptr->next!=start);
            return start;
  }

