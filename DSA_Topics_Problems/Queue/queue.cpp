#include <iostream>
#include <limits.h>
using namespace std;

# define N 1000 // N is the capacity of the Queue

// Class to implement a queue
class Queue {
public:
	int front, rear, size;
	unsigned capacity;
	int* array;
};

// Function to create a queue of assigned capacity
Queue* createQ(unsigned capacity){
	Queue* queue = new Queue();
	queue->capacity = capacity;
	queue->front = queue->size = 0;

    // The rear of the queue will be at the last index
	queue->rear = capacity - 1;
	queue->array = new int[queue->capacity];
	return queue;
}

// Function to check if the Queue is full or not
bool isFull(Queue* queue){
    if (queue->size == queue->capacity){
        cout<<"The Queue is full\n";
        return true;
    }
    cout<<"The Queue is not full\n";
	return false;
}

// Function to check is the Queue is empty or not
bool isEmpty(Queue* queue){
    if (queue->size == 0){
        cout<<"The Queue is empty\n";
        return true;
    }
    cout<<"The Queue is not empty\n";
	return false;
}

// Function to add an item to the queue.
// It changes rear and size
void enqueue(Queue* queue){
    int item; 
    cout<<"Enter the element to be inserted into the queue:\n";
    cin>>item;
	if (queue->size == queue->capacity){
	    cout<<"The Queue is already full, can't add any more items\n";
		return;
	}
	queue->rear = (queue->rear + 1)
				% queue->capacity;
	queue->array[queue->rear] = item;
	queue->size = queue->size + 1;
	cout << item << " enqueued to the queue\n";
}

// Function to remove an item from queue.
// It changes front and size
int dequeue(Queue* queue){
	if (queue->size == 0){
	    cout<<"The Queue is already empty, can't remove any more items\n";
		return INT_MIN;
	}
	int item = queue->array[queue->front];
	queue->front = (queue->front + 1)
				% queue->capacity;
	queue->size = queue->size - 1;
	cout<<"Removing "<<item<<" from the queue\n";
	return item;
}

// Function to get the front of the queue
int peek(Queue* queue){
	if (queue->size == 0) return INT_MIN;
	cout<<"The front most element of the queue is "<<queue->array[queue->front]<<"\n";
	return queue->array[queue->front];
}

// Driver code
int main(){
    cout<<"QUEUE (Total Capacity: "<<N<<")\n";\
    
    // Initializing a Queue of 1000 capacity
    Queue* queue = createQ(1000); 
    
    int choice;
    while(1){
        cout<<"\nChoose any of the following options:\n";
        cout<<" 0: Exit         1: Enqueue      2: Dequeue         3: Peek\n";
        cout<<" 4: Check if the stack is empty     5: Check if the stack is full\n\n";
        cin>>choice;

        switch(choice){
            case 0: cout<<"\nEND"; exit(0);
            case 1: enqueue(queue); break;
            case 2: dequeue(queue); break;
            case 3: peek(queue); break;
            case 4: isEmpty(queue); break;
            case 5: isFull(queue); break;
            default: printf("Please choose a correct option!");
        }
    }
    return 0;
}
