#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node 
{
    int key;
    struct node *left,*right;
};
struct node * InsertNewNode(int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = value;
    temp->left=temp->right=NULL;
    return temp;
}
struct node* insert(struct node *Node,int data)
{
    if(Node == NULL)     
    return InsertNewNode(data);
    
       if(Node->key < data)
       Node->right = insert(Node->right,data);
       else if(Node->key > data)
       Node->left = insert(Node->left,data);
   
   return Node;
}
void inorder(struct node *root)  
{
   if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->key);
        inorder(root->right);
    }
}

int main()
{
     /*       50
          /    \
         10     60
         \       
         40
         /
        20
*/
        struct node *root = NULL;
    root = insert(root,50);
    insert(root,60);
    insert(root,10);
    insert(root,40);
    insert(root,20);
    inorder(root);
    return 0;
}