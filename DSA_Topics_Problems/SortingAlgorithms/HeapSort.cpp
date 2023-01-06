#include <bits/stdc++.h>
using namespace std;

void Heapify(vector<long long int> &vec, int n, int i) // Max heapifying
{
    int l = (2 * i) + 1; // left node
    int r = (2 * i) + 2; // right node

    int largest = i; // store index which hold largest element

    /*  here we are compare with vec[largest] not with vec[i] because
    if this situation occurs         5  (largest = i)
                                   /   \
                             (l)   8       7 (r)
    after compare with left node we see right node is also greater than root ele but we need largest therefore vec[largest] */

    if (vec[l] > vec[largest] && l < n)
    {
        largest = l;
    }
    if (vec[r] > vec[largest] && r < n)
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
    vector<long long int> vec = {
        9810098100,
        9891098910,
        9810098101,
        9891012345,
        9988665544,
        9891012344,
        9898989898,
        9810198100,
        9891112346

    };
    for (long long int i : vec)
    {
        cout << i << " ";
    }
    cout << "\nAfter Heap sort : ";
    heapSort(vec, vec.size());
    for (long long int i : vec)
    {
        cout << i << " ";
    }
    system("pause");
}