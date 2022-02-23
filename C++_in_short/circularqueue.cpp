// circular queue CircularQueue



#include <stdio.h>
#include <iostream>
using namespace std;
class circularQueue 
{
    private:
    int front;
    int rear;
    int size;
    int *q;
    public:
    circularQueue(){
         this->size = 10;
         this->front = this->rear = 0;
         this->q = new int[size];
    }

        circularQueue(int size){
         this->size = size;
         this->front = this->rear = 0;
         this->q = new int[size];
    }
    ~circularQueue()
    {
        delete[] q;
    }

    bool isEmpty()
    {
        if(front == rear)   
        return true;
        else
        return false;
    }

    bool isFull()
    {
        if((rear+1)%size == front)
        return true;
        return false;
    }
    void enqueue(int x)
    {
        if(isFull())
        cout << "Queue overflow\n";
        else
        {
            rear = (rear+1)%size;
            q[rear] = x;
        }
    }

    int dequeue()
    {
        int x = -1;
        if(isEmpty())
        {
            cout << "Queue underflow\n";
            
        }
        else 
        {
            front = (front+1)%size;
            x = q[front];
            
        }
        return x;
    }

    void display() 
    {
        int i = front + 1;
        do {
            cout << q[i] << flush;
            if (i < rear)
             {
                cout << " <- " << flush;
            }
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
        cout << "\n\n" ;
    }
};

int main()
{
    circularQueue Q(5);
    Q.enqueue(2);
        Q.enqueue(2);

    Q.enqueue(2);
    Q.enqueue(2);
    Q.enqueue(2);
    Q.display();

    Q.dequeue();
    Q.dequeue();
    Q.display();
}
