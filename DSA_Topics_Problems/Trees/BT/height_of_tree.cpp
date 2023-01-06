/* */
class Solution
{
public:
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(root == NULL)
        return 1;
        
        int lheight = Height(root->left);
        int rheight = Height(root->right);
        
        if(abs(lheight-rheight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return true;
       
       
        return false;
    }

    int Height(Node *p)
    {
        if (p == NULL)
            return 0;
        
        return 1 + max(Height(p->left),Height(p->right));
    }
};