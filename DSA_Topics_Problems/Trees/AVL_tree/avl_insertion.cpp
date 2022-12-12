#include <bits/stdc++.h>
#define MAXN 2000
using namespace std;

struct Node
{
    int data, height;
    Node *left, *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
        height = 1;
    }
};

bool isBST(Node *n, int lower, int upper)
{
    if (!n)
        return 1;
    if (n->data <= lower || n->data >= upper)
        return 0;
    return isBST(n->left, lower, n->data) && isBST(n->right, n->data, upper);
}

pair<int, bool> isBalanced(Node *n)
{
    if (!n)
        return pair<int, bool>(0, 1);

    pair<int, bool> l = isBalanced(n->left);
    pair<int, bool> r = isBalanced(n->right);

    if (abs(l.first - r.first) > 1)
        return pair<int, bool>(0, 0);

    return pair<int, bool>(1 + max(l.first, r.first), l.second && r.second);
}

bool isBalancedBST(Node *root)
{
    if (!isBST(root, INT_MIN, INT_MAX))
        cout << "BST voilated, inorder traversal : ";

    else if (!isBalanced(root).second)
        cout << "Unbalanced BST, inorder traversal : ";

    else
        return 1;
    return 0;
}

void printInorder(Node *n)
{
    if (!n)
        return;
    printInorder(n->left);
    cout << n->data << " ";
    printInorder(n->right);
}

class Solution{
  public:
    /*You are required to complete this method */
    Node *newNode(int data)
    {
        Node *temp = new Node(data);
        // temp->data = data
        // temp->left = temp->right = NULL;
        // temp->height = 1;
        return (temp);
    }
    
    
    Node *leftRotate(Node *z)
    {
        if(!z)
        return z;
        
        
        Node *y = z->right;
        Node *t2 = y->left;
        
        y->left = z;
        z->right = t2;
        
        z->height = 1 + max(height(z->left), height(z->right));
       y->height = 1 + max(height(y->left), height(y->right));
        
        return y;
    }
    
    Node *rightRotate(Node *z)
    {
        if(!z)
        return z;
        
        
        Node *y = z->left;
        Node *t2 = y->right;
        
        y->right = z;
        z->left = t2;
        
       z->height = 1 + max(height(z->left), height(z->right));
       y->height = 1 + max(height(y->left), height(y->right));
            
            
        return y;
    }
    int height(Node *root)
    {
        if(root==NULL)
        return 0;
         return root->height;
    }
    
    int balanceFactor(Node *root)
    {
        if(root==NULL)
        return 0;
        
        return height(root->left) - height(root->right);
       
    }
    
    Node* insertToAVL(Node* node, int data)
    {
        if(node == NULL)
        return newNode(data);
        
        
        if(data < node->data)
        {
            node->left = insertToAVL(node->left, data);
            
        }
        else if(data > node->data)
        {
            node->right = insertToAVL(node->right, data);
           
        }
        else
        return node;
        
        
      node->height = 1 + max(height(node->left), height(node->right));
      int balance = balanceFactor(node);
        
       
        
        // LL case 
       // Node *temp = node;
        if(balance > 1)
        {   
            // LL case 
            if(data < node->left->data)
            return rightRotate(node);
            
            // LR case so LR rotate
            else
            {
              node->left = leftRotate(node->left);
               return rightRotate(node);
            }
            
        }
        
        // Right case
        else if(balance < -1)
        {
            // RR case
            if(data > node->right->data)
            return leftRotate(node);
            
            // RL case so RL rotate
            else
            {
                node->right = rightRotate(node->right);
               return leftRotate(node);
            }
            
        }
        
        return node;
        
    }
};

int main()
{
    int ip[MAXN];

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> ip[i];

        Node *root = NULL;
        Solution obj;
        for (int i = 0; i < n; i++)
        {
            root = obj.insertToAVL(root, ip[i]);

            if (!isBalancedBST(root))
                break;
        }

        printInorder(root);
        cout << endl;
    }
    return 0;
}