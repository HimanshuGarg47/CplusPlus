#include <iostream>

using namespace std;
 
class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};
 
class Queue{
private:
    int size;
    int front;
    int rear;
    Node** Q;  // [Node*]*: Pointer to [Pointer to Node]
public:
    Queue(int size);
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(Node* x);
    Node* dequeue();
};
 
Queue::Queue(int size) {
    this->size = size;
    front = -1;
    rear = -1;
    Q = new Node* [size];
}
 
Queue::~Queue() {
    delete [] Q;
}
 
bool Queue::isEmpty() {
    if (front == rear){
        return true;
    }
    return false;
}
 
bool Queue::isFull() {
    if (rear == size-1){
        return true;
    }
    return false;
}
 
void Queue::enqueue(Node* x) {
    if (isFull()){
        cout << "Queue Overflow" << endl;
    } else {
        rear++;
        Q[rear] = x;
    }
}
 
Node* Queue::dequeue() {
    Node* x = nullptr;
    if (isEmpty()){
        cout << "Queue Underflow" << endl;
    } else {
        front++;
        x = Q[front];
    }
    return x;
}
 
Node* root = new Node;
 
void createTree(){
    Node* p;
    Node* t;
    int x;
    Queue q(10);
 
    cout << "Enter root value: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.enqueue(root);
 
    while (! q.isEmpty()){
        p = q.dequeue();
 
        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.enqueue(t);
        }
 
        cout << "Enter right-child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}
 
void preorder(Node* p){
    if (p){
        cout << p->data << ", " << flush;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
 
void inorder(Node* p){
    if (p){
        inorder(p->lchild);
        cout << p->data << ", " << flush;
        inorder(p->rchild);
    }
}
 
void postorder(Node* p){
    if (p){
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}
 
 
int main() {
 
    createTree();
 
    preorder(root);
    cout << endl;
    
    inorder(root);
    cout << endl;
    
    postorder(root);
    cout << endl;
 
    return 0;
}









// // creating binary using queue
// #include <iostream>
// #include <stdio.h>
// #include <stdlib.h>
// using namespace std;

// struct Queue 
// {
//     int front;
//     int rear;
//     int size;
//     Node  **q;
// };

// void create(struct Queue *Q,int size)
// {
//     Q->size = size;
//     Q->front = Q->rear = -1;
//     Q->q = new *Node(size);

// }

// void enqueue(struct Queue *Q,Node x)
// {
//     if(Q->rear < Q->size-1)
//     Q->q[++Q->rear] = x;
//     else
//     printf("Queue is full\n");
// }

// Node* dequeue(struct Queue *Q)
// {
//     Node x = NULL;
//     if(Q->front == Q->rear)
//     printf("Stack is empty\n");
//      else            //(Q->front!=Q->rear)
//      {
//         Q->front++;
//         x = Q->q[Q->front];

//      }
//      return x; 
// }

// bool isEmpty() {
//     if (front == rear){
//         return true;
//     }
//     return false;
// }
 
// bool isFull() {
//     if (rear == size - 1){
//         return true;
//     }
//     return false;
// }


// // void Display(struct Queue Q)
// // {
// //     if(Q.front!=Q.rear)
// //     {
// //         int i;
// //         for(i = Q.front+1;i<=Q.rear;i++)
// //         {
// //            printf("%d ",Q.q[i]);
// //         }
// //         printf("\n");
// //     }
// // }
// class Node{
//     int data;
//     Node *rchild;
//     Node *lchild;
// };

// void create(){
//     Node *p,*t;
//     int x;
//     Queue q;
//     cout << "Enter root value\n" ;
//     cin >> x;
//     Node *root = new Node();
//     root->data = x;
//     root->lchild = root->rchild = NULL;
//     enqueue(root);
//     while(!isEmpty(q))
//     {
//         p = dequeue(&q);
//         cout << "Enter left child\n" ;
//         cin >> x;
//         if(x!=-1)
//         {
//             t= new Node();
//             t->data = x;
//             t->lchild = t->rchild = NULL;
//             p->lchild  = t;
//             enqueue(t);
//         }

//         cout << "Enter right child\n" ;
//         cin >> x;
//         if(x!=-1)
//         {
//             t= new Node();
//             t->data = x;
//             t->lchild = t->rchild = NULL;
//             p->rchild  = t;
//             enqueue(t);
//         }
//     }

// }
