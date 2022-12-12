#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void inorder(TreeNode *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->val << "\t";
        inorder(root->right);
    }
}

void level_order(TreeNode *root)
{
    queue<TreeNode *> qu;

    qu.push(root);
    while (!qu.empty())
    {
        TreeNode *temp = qu.front();
        qu.pop();

        if (temp)
            cout << temp->val << " ";
        else
            cout << "NULL ";

        if (temp)
        {
            qu.push(temp->left);
            qu.push(temp->right);
        }
    }
}

class Solution
{
public:
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
    {
        if (!root1 || !root2)
            return root1==NULL?root2:root1;
        


        if (root1 && root2)
        {
            root1->val = root1->val + root2->val;
        }
        if (root1->left && root2->left)
        {
            mergeTrees(root1->left, root2->left);
        }
        else if (!root1->left && root2->left)
        {
            root1->left = root2->left;
        }

        if (root1->right && root2->right)
        {
            mergeTrees(root1->right, root2->right);
        }
        else if (!root1->right && root2->right)
        {
            root1->right = root2->right;
        }

        // mergeTrees(root1->left, root2->left);
        // mergeTrees(root1->right, root2->right);

        return root1;
    }
};
int main()
{
    //     Input: root1 = [1,3,2,5], root2 = [2,1,3,null,4,null,7]
    // Output: [3,4,5,5,4,null,7]
    Solution sl;
    TreeNode *n1 = new TreeNode(1), *n2 = new TreeNode(2);
    n1->left = new TreeNode(3);
    n1->right = new TreeNode(2);
    n1->left->left = new TreeNode(5);

   // level_order(n1);
    cout << "\n";
    // inorder(n1);

    n2->left = new TreeNode(1);
    n2->right = new TreeNode(3);
    n2->left->right = new TreeNode(4);
    n2->right->right = new TreeNode(7);

  //  level_order(n2);
    cout << "\n";
    // inorder(n2);
    TreeNode *temp = sl.mergeTrees(n1, n2);
    level_order(temp);
}