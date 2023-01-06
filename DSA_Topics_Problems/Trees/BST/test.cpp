#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data, height;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        height = 1;
        left = right = NULL;
    }
};

int setHeights(Node *n)
{
    if (!n)
        return 0;
    n->height = 1 + max(setHeights(n->left), setHeights(n->right));
    return n->height;
}

Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    setHeights(root);
    return root;
}

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

struct Node *deleteNode(struct Node *root, int data);



int height(Node *root);
Node *leftRotate(Node *z)
{
    if (!z)
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
    if (!z)
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
    if (root == NULL)
        return 0;
    return root->height;
}

int balanceFactor(Node *root)
{
    if (root == NULL)
        return 0;

    return height(root->left) - height(root->right);
}

Node *Balance_the_Tree(Node *node)
{
    if (node == NULL)
        return NULL;

    node->height = 1 + max(height(node->left), height(node->right));
    int balance = balanceFactor(node);

    // LL case
    // Node *temp = node;
    if (balance > 1)
    {
        // LL case
        if (balanceFactor(node->left) >= 0) //(data < node->left->data)
            return rightRotate(node);

        // LR case so LR rotate
        else
        {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    }

    // Right case
    else if (balance < -1)
    {
        // RR case
        if (balanceFactor(node->right) <= 0) //(data > node->right->data)
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

Node *minValueNode(Node *node)
{
    Node *current = node;

    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;

    return current;
}

Node *deleteNode(Node *root, int data)
{
    // base case
    if (root == NULL)
        return root;

    // If the data to be deleted is
    // smaller than the root's
    // data, then it lies in left subtree
    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
        Balance_the_Tree(root);
    }

    // If the data to be deleted is
    // greater than the root's
    // data, then it lies in right subtree
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
        Balance_the_Tree(root);
    }

    // if data is same as root's data, then This is the node
    // to be deleted
    else
    {
        // node has no child
        if (root->left == NULL && root->right == NULL)
            return NULL;

        // node with only one child or no child
        else if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            root = temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            root = temp;
        }

        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        Node *temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    if (root == NULL)
        return NULL;

    root->height = 1 + max(height(root->left), height(root->right));
    int balance = balanceFactor(root);

    if (abs(balance) > 1)
        return Balance_the_Tree(root);

    return root;
}

int main()
{
    int t;
    cin >> t;
    getchar();

    while (t--)
    {
        string s;
        getline(cin, s);
        Node *root = buildTree(s);

        int n;
        cin >> n;
        int ip[n];
        for (int i = 0; i < n; i++)
            cin >> ip[i];

        for (int i = 0; i < n; i++)
        {
            root = deleteNode(root, ip[i]);

            if (!isBalancedBST(root))
                break;
        }

        if (root == NULL)
            cout << "null";
        else
            printInorder(root);
        cout << endl;

        getline(cin, s); // to deal with newline char
    }
    return 1;
}