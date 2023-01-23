#include <bits/stdc++.h>
using namespace std;

// to get index of left child of node at index i
int left(int i)
{
    return (2 * i) + 1;
}

// to get index of right child of node at index i
int right(int i)
{
    return (2 * i) + 2;
}

void Heapify(vector<long long int> &vec, int n, int i) // Max heapifying
{
    int l = left(i);  // left node
    int r = right(i); // right node

    int largest = i; // store index which hold largest element

    /*  here we are compare with vec[largest] not with vec[i] because
    if this situation occurs         5  (largest = i)
                                   /   \
                             (l)   8       7 (r)
    after compare with left node we see right node is also greater than root ele but we need largest therefore vec[largest] */

    if (l < n && vec[l] > vec[largest])
    {
        largest = l;
    }
    if (r < n && vec[r] > vec[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(vec[i], vec[largest]); // here swap is built in function
        Heapify(vec, n, largest);   // heapify on swapped element to maintain max heap
    }
}

void heapSort(vector<long long int> &vec, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--) // here we can remove n parameter with vec.size() but sake for simplicity we are using n
    {
        Heapify(vec, n, i);
    }

    for (int i = n - 1; i > 0; i--)
    {
        swap(vec[0], vec[i]);
        /* now after swap of (0,i)  | 0th index or root element of heap is not max ele
         therefore apply heapify on always 0th element */
        Heapify(vec, i, 0);
    }
    return;
}

int main()
{
    vector<long long int> vec = {4, 6, 1, 2, 3, 5};

    // print elements of array before heap sort
    for (long long int i : vec)
    {
        cout << i << " ";
    }

    heapSort(vec, vec.size());
    
    cout << "\nAfter Heap sort : ";
    for (long long int i : vec)
    {
        cout << i << " ";
    }
    system("pause");
}