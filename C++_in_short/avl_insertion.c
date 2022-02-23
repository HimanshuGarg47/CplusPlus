#include <stdio.h>
#include <malloc.h>
struct Node
{
    int key;
    struct Node *left, *right;
    int height;
};


struct Node *NewNode(int data)
{
    struct Node *troot = (struct Node *)malloc(sizeof(struct Node));
    troot->key =  data;
    troot->left = NULL;

    troot->right = NULL;
    troot->height = 1;
    return troot;
}
int max(int a,int b)
{
    return (a > b)?a:b;
}

int heightoftree(struct Node *Node)    
{
    if(Node == NULL)
    return 0;
    else
    return Node->height;
}

int balance(struct Node *node)  
{
    return heightoftree(node->left)-heightoftree(node->right);
}
struct Node *insert(struct Node *troot, int data)
{
    if (troot == NULL)
    {
        return NewNode(data);
    }
     if (troot->key < data)
    {
        troot->right = insert(troot, data);
       // troot->height = height + 1;
    }
    else if(troot->key > data)
    {
        troot->left = insert(troot, data);
      //  troot->height = height + 1;
    }
    else
        return troot;
    troot->height = max(heightoftree(troot->left),heightoftree(troot->right));
    int getbalance = balance(troot);
    // right left subtree
    if(getbalance < -1 && data < troot->right->key)
    {
        troot->right = rightRotate(troot->right);
        return leftRotate(troot);
        
    }
     if(getbalance < -1 && data > troot->left->key) // right right rotation
    {
       return leftRotate(troot);
    }
     if(getbalance > 1 && data > troot->left->key) // left right rotation
    {        troot->left = leftRotate(troot->left);
        return rightRotate(troot);
    }
     if(getbalance > 1 && data < troot->left->key) // left left rotation
    {
        return rightRotate(troot);
    }

    return troot;
}
struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    y->left = x->right;
    x->right = y;
    x->height = max(heightoftree(x->left), heightoftree(x->right))+1;
    y->height = max(heightoftree(y->left), heightoftree(y->right))+1;
    return x;

}

struct Node *leftRotate(struct Node *y)
{
    struct Node *x = y->right;
    y->right = x->left;
    x->left = y;
   

    x->height = max(height(x->left), heightoftree(x->right))+1;
    y->height = max(height(y->left), heightoftree(y->right))+1;
     return x;
}

void preorder(struct Node *root)
{
    if(root ==NULL)
    return;
    printf("%d\n",root->key);
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    struct Node *root = NULL;
    /* Constructing tree given in the above figure */
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);
    preorder(root);
    /* The constructed AVL Tree would be
            30
           /  \
         20   40
        /  \     \
       10  25    50
  */
}