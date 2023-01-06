#include<bits/stdc++.h>
using namespace std;   
struct node 
{ 
    int key; 
    struct node *left, *right; 
}; 
 
// A utility function to search a given node
bool search(struct node* root, int key) 
{ 
    // Base Cases: root is null or key is present at root 
    if (root == NULL || root->key == key) 
       return true; 
     
    // Key is greater than root's key 
    if (root->key < key) 
       return search(root->right, key); 
  
    // Key is smaller than root's key 
    return search(root->left, key); 
} 
   
// A utility function to create a new BST node 
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
   
// A utility function to do inorder traversal of BST 
void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        cout<<root->key<<"\n";
        inorder(root->right); 
    } 
} 
   
// A utility function to insert a new node with given key in BST 
struct node* insert(struct node* node, int key) 
{ 
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key); 
  
    /* Otherwise, recur down the tree */
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    /* return the (unchanged) node pointer */
    return node; 
} 

void searchKey(Node* &curr, int key, Node* &parent)
{
	while (curr != nullptr && curr->data != key)
	{
		// update parent node as current node
		parent = curr;

		// if given key is less than the current node, go to left subtree
		// else go to right subtree
		if (key < curr->data)
			curr = curr->left;
		else
			curr = curr->right;
	}
}

// A utility function to delete node from a BST
void deleteNode(Node*& root, int key)
{
	// pointer to store parent node of current node
	Node* parent = nullptr;
	// start with root node
	Node* curr = root;
	// search key in BST and set its parent pointer
	searchKey(curr, key, parent);
	// return if key is not found in the tree
	if (curr == nullptr)
		return;
        
	// Case 1: node to be deleted has no children i.e. it is a leaf node
	if (curr->left == nullptr && curr->right == nullptr)
	{
		// if node to be deleted is not a root node, then set its
		// parent left/right child to null
		if (curr != root)
		{
            if (parent->left == curr)
				parent->left = nullptr;
			else
				parent->right = nullptr;
		}
		// if tree has only root node, delete it and set root to null
		else
			root = nullptr;
		// deallocate the memory
		free(curr);	 // or delete curr;
	}
    
	// Case 2: node to be deleted has two children
	else if (curr->left && curr->right)
	{
		// find its in-order successor node
		Node* successor  = minimumKey(curr->right);
		// store successor value
		int val = successor->data;
		// recursively delete the successor. Note that the successor
		// will have at-most one child (right child)
		deleteNode(root, successor->data);
		// Copy the value of successor to current node
		curr->data = val;
	}
	// Case 3: node to be deleted has only one child
	else
	{
		Node* child = (curr->left)? curr->left: curr->right;
		// if node to be deleted is not a root node, then set its parent to its child
		if (curr != root)
		{
			if (curr == parent->left)
				parent->left = child;
			else
				parent->right = child;
		}
		// if node to be deleted is root node, then set the root to child
		else
			root = child;
		// deallocate the memory
		free(curr);
	}
}

// Driver Program to test above functions 
int main() 
{ 
    /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
    struct node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
   
    if(search(root,60)==1)
    cout<<"Node Present\n";
    else
    cout<<"Node not present\n";
    // print inoder traversal of the BST 
    inorder(root);
    deleteNode(root,40);
    return 0; 
}
