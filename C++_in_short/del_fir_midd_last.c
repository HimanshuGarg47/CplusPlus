/* program to delete first ,middle and last node of header linked list */
#include <stdio.h>
#include <malloc.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *create_all(struct node *);
struct node *display(struct node *);
struct node *del_fir_sec_las(struct node *);
struct node *start;
//start=(struct node *)malloc(sizeof(struct node));
int main()
{
    int option;
    do
    {
        /* code */
        printf("\n***Main Menu *******\n");
        printf("\n1. For create header linked list");
        printf("\n2. For delete first ,second and last linked list");
        printf("\n3. For display header linked list");
        printf("\n4. For exit");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            start =create_all(start);
            break;
            case 2:
            start = del_fir_sec_las(start);
            break;
            case 3:
            start = display(start);
            break;
        }
    } while(option!=4);
}

struct node *create_all(struct node *start)
{
    int n;
    struct node *ptr,*new_node;
    //ptr=start;
    printf("\nEnter element to create H.L.L");
    printf("\nEnter -1 to end");
    scanf("%d",&n);
    while(n!=-1)
    {
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=n;
        ptr->next=NULL;
        if(start==NULL)
        {
            start=(struct node*)malloc(sizeof(struct node));
            start->next =ptr;
        }
        else 
        {
            new_node= start;
            while(new_node->next!=NULL)
            new_node=new_node->next;
            new_node->next = ptr;
                   }
        scanf("%d",&n);
    }
    return start;
}
struct node *display(struct node *start)
{
struct node *ptr;
ptr=start;
while(ptr!=NULL)
{
    printf("%d\t",ptr->data);
    ptr=ptr->next;
}
return start;
}


//function to delete required nodes
struct node *del_fir_sec_las(struct node *start)
{
int i,j,count=1;
struct node *ptr,*temp,*preptr,*temp1;
ptr=start;
while(ptr->next!=NULL)
{
    count++;
    temp1=ptr;
    ptr=ptr->next;
}
i=(count)/2;
ptr=start;

for(count=0;count<i;i++)
{
    preptr=ptr->next;
ptr=ptr->next;
}
preptr->next=ptr->next;
free(ptr);
// deleting last noṇde
//deleting last node

//delteing first node
//temp=start->next;
//start->next=temp->next;
//free(temp);
 /*  temp1=(struct node *)malloc(sizeof(struct node));
temp1->next=NULL;
free(ptr);

temp=start->next;
start->next=start->next->next;
free(temp);   */ 
// deleting middle of the node

return start;
}
