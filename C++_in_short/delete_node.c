#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node 
{
    int key;
    struct node *left,*right;
};

struct node *newNode(int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key=value;
    temp->left=temp->right=NULL;
    return temp;    
}



struct node *insert(struct node* node,int data)
{
    if(node == NULL)
    return newNode(data);
    if(data<node->key)
    {
       node->left = insert(node->left,data);
    }
    else
    {
        node->right = insert(node->right,data);
    }
    return node;
}




struct node *minimumvalue(struct node *node)   
{
    while(node!=NULL)
    {
       node = node->right; 
    }
    return node;
}



// delete function
struct node *delete(struct node *Node , int value)
{
    if(Node == NULL)
    return Node;
    if(value < Node->key)
    {
        Node->left = delete(Node->left,value);
    }
    else if(value > Node->key)
    {
        Node->right = delete(Node->right,value);
    }
    else
    {
       if(Node->left == NULL)
       { 
           struct node* temp = Node->right;
            return temp;
        }

       else if(Node->right == NULL)
        { 
             struct node *temp = Node->left;
             //        Node = temp;
            return temp;
       }

           struct node* temp;
          temp =minimumvalue(Node->right);
          Node->key = temp->key;
          Node->right = delete(Node->right,temp->key);
    
    }
    return Node;
}
void inorder(struct node*node)
{
    if(node!=NULL)
    {
        inorder(node->left);
        printf("%d\t",node->key);
        inorder(node->right);
    }
}
int main()
{
    struct node *root = NULL;
    root = insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
    printf("\nInorder traversal of tree before modified\n");
    inorder(root);
    root = delete(root,20);
    printf("\nAfter deleting 20  node inorder traversal is\n");
    inorder(root);
    root = delete(root,30);
    printf("\nAfter deleting 30 node inorder traversal is\n");
    inorder(root);
    printf("\nDelete 50\n");
    root = delete(root,50);
    printf("\nAfter deleting 50 node inorder traversal is\n");
    inorder(root);
    return 0;
}

