#include <stdio.h>
#include <stdlib.h>
struct node{
    char data;
    struct node *left;
    struct node *right;
};
int search(char arr[],int strt,int end,char value);
struct node *newNode(char data);
struct node *buildTree(char in[],char pre[],int instrt,int inEnd)
{
    static int preIndex=0;
    if(instrt > inEnd)
    return NULL;
    struct node *tNode=newNode(pre[preIndex++]);
    if(instrt==inEnd)
    return tNode;
    int inIndex=search(in,instrt,inEnd,tNode->data);
    tNode->left=buildTree(in,pre,instrt,inIndex-1);
    tNode->right=buildTree(in,pre,inIndex+1,inEnd);
    return tNode;
}
// search function
int search(char arr[],int strt,int end,char value)  
{
    int i;
    for(i=strt;i<=end;i++)
    {
        if(arr[i]==value)
        return i;
    }
}
// function newNode
struct node *newNode(char data)
{
    struct node *node=(struct node *)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return(node);
}
// printInorder function
void printInorder(struct node *node)
{
    if(node==NULL)
    return;
    printInorder(node->left);
    printf("%c",node->data);
    printInorder(node->right);
}
// main function
int main()
{
    char in[]={'D','B','E','A','F','C'};
    char pre[]={'A','B','D','E','C','F'};
    int len=sizeof(in)/sizeof(in[0]);
    printf("\nlength is %d\n",len);
    struct node *root=buildTree(in,pre,0,len-1);
    printf("Inorder traversal of the contructed Tree is\n");
    printInorder(root);
    getchar();
}