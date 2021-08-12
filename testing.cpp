#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


// ["1->2->5","1->3"]
class Solution {
public:
    vector<string> vc;
    string binaryTreePaths(TreeNode *root,string str1)
    {
      //  static string str = "\"";
        if(root==NULL)
        {
            str1.erase(str1.end()-2, str1.end()+0);
            str1 += "\"";
            return str1;
        }
        string str;
        str += str1+to_string(root->val) + "->";
        vc.push_back((str1+binaryTreePaths(root->left,str1)));
         vc.push_back((str1+binaryTreePaths(root->right,str1)));
        
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        binaryTreePaths(root,"");
        return vc;     
    }

    
};




 // vector<string> vc;
        //  if(!root->left && !root->right)
        // {
        //     vc.push_back("\"" + root->val);
        //     return vc;
        // }
        // TreeNode *temp = root;
        // string str = "\"" + root->val;
        // vc.push_back("\"");

        // while(temp->left!=NULL || temp->right !=NULL)
        // {
            
            
        //     if(temp->left)
        //     {
        //         str += temp->val+"->";
        //         temp = temp->left;
        //     }
        //     else if(temp->right)
        //     {
        //         str += temp->val+"->";
        //         temp = temp->right;
        //     }              
        // } 
        // if(temp)
        // {
        //     str += temp->val + "\"";
        // }
        // vc.push_back(str);