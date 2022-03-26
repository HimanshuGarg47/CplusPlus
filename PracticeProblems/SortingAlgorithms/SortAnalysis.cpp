#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printSort(int p, int arr[])
{
    // freopen("sorted.txt", "w", stdout);
    cout << "";
    for (int i = 0; i < p; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << "\n";
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i + 1],arr[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 
void merge(int l, int m, int h, int arr[])
{
    int l_size = m - l + 1;
    int r_size = h - m;
    int left[l_size + 1];
    int right[r_size + 1];
    for (int i = 0; i < l_size; i++)
    {
        left[i] = arr[l + i];
    }       
    for (int j = 0; j < r_size; j++)
    {
        right[j] = arr[j + m + 1];
    }
    int l_i = 0;
    int r_i = 0;
    left[l_size] = right[r_size] = INT_MAX;
    for (int i = l; i <= h; i++)
    {
        if (left[l_i] <= right[r_i])
        {
            arr[i] = left[l_i];
            l_i++;
        }
        else
        {
            arr[i] = right[r_i];
            r_i++;
        }
    }
}
void mergeSort(int l, int h, int arr[])
{
    int mid = (l + h) / 2;
    if (l == h)
        return;
    mergeSort(l, mid,arr);
    mergeSort(mid + 1, h,arr);
    merge(l, mid, h, arr);
}
void selectionSort(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void averageCase(int n, int arr[])
{
    // average Case
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    clock_t start, end;
    start = clock();
    cout << "Before Sorting\n";
    printSort(n,arr);
    bubbleSort(n, arr1);
     cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();
    double time_taken = double(end - start) / double((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY BUBBLE SORT AVERAGE CASE IS :" << fixed << time_taken << setprecision(6);
    cout << " sec\n\n\n\n";

    // selectionSort
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    start = clock();
    cout << "Before Sorting\n";
    printSort(n,arr);
    selectionSort(n, arr1);
     cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();
     time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY SELECTION SORT AVERAGE CASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";

    // insertion sort
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    start = clock();
    cout << "Before Sorting\n";
    printSort(n,arr);
    insertionSort(arr1, n);
     cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();
    time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY INSERTION SORT AVERAGE CASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";


    // merge sort
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    start = clock();
    cout << "Before Sorting\n";
    printSort(n,arr);
    mergeSort(0,n-1,arr1);
     cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();
    time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY MERGE SORT AVERAGE CASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";
    

    // quickSort
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    start = clock();
    cout << "Before Sorting\n";
    printSort(n,arr);
    quickSort(arr1,0,n-1);
     cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();
    time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY Quick SORT AVERAGE CASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";
        cout << "\n\n\n\n";


}

void worstCase(int n, int arr[])
{
    sort(arr, arr + n, greater<int>());
    // worstCase
    clock_t start, end;
    start = clock();
     cout << "Before Sorting\n";
    printSort(n,arr);
    bubbleSort(n, arr);
       cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();

    double time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY BUBBLE SORT WORST CASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";

    // selectionsort
    sort(arr, arr + n, greater<int>());
    start = clock();
     cout << "Before Sorting\n";
    printSort(n,arr);
    selectionSort(n, arr);
       cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();

     time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY SELECTION SORT WORST CASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";

    // insertionSort
    sort(arr, arr + n, greater<int>());
    start = clock();
     cout << "Before Sorting\n";
    printSort(n,arr);
    insertionSort(arr, n);
       cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();

     time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY INSERION SORT WORST CASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";


    sort(arr, arr + n, greater<int>());
    start = clock();
     cout << "Before Sorting\n";
    printSort(n,arr);
    mergeSort(0,n-1,arr);
           cout << "After Sorting\n";

    printSort(n,arr);
    end = clock();

     time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY MERGE SORT WORST CASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";    


    // quicksort
    sort(arr, arr + n, greater<int>());
    start = clock();
     cout << "Before Sorting\n";
    printSort(n,arr);
    quickSort(arr, 0 , n-1);
       cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();

     time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY Quick SORT WORST CASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";   
        cout << "\n\n\n\n";
 

}
void bestCase(int n, int arr[])
{
    sort(arr, arr + n);
    // Best Case
    clock_t start, end;
    start = clock();
    cout << "Before Sorting\n";
    printSort(n,arr);
    bubbleSort(n, arr);
    cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();
    double time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY BUBBLE SORT BESTCASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";

    // selectionSort
    start = clock();
    cout << "Before Sorting\n";
    printSort(n,arr);
    selectionSort(n, arr);
    cout << "After Sorting\n";
        printSort(n,arr);

    end = clock();
     time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY SELECTION SORT BESTCASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";

    // insertionSort
    start = clock();
    cout << "Before Sorting\n";
    printSort(n,arr);
    insertionSort(arr, n);
    cout << "After Sorting\n";
        printSort(n,arr);

    end = clock();
     time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY INSERTION SORT BESTCASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";

    // merge sort
      start = clock();
       cout << "Before Sorting\n";
    printSort(n,arr);
     mergeSort(0,n-1,arr);
       cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();
     time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY MERGE SORT BESTCASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";

    // quick sort
    start = clock();
     cout << "Before Sorting\n";
    printSort(n,arr);
     quickSort(arr,0,n-1);
       cout << "After Sorting\n";
    printSort(n,arr);
    end = clock();
     time_taken = double(end - start) / (double)((CLOCKS_PER_SEC));
    cout << "TIME TAKEN BY Quic SORT BESTCASE IS :" << fixed << time_taken << setprecision(6);
    cout << "sec\n\n\n\n";
    cout << "\n\n\n\n";

}

void randomGenerator(int arr[], int n)
{
    // freopen("random.txt", "w", stdout);
    srand(time(NULL));
     cout<<"generator called\n";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 9999 + 1;
       // cout<<arr[i]<<" ";
    }
    //cout<<"generator finished\n";
}
int main()
{
    // freopen("input.txt", "w" , stdout);
    const long long int p[] = {10};
    srand(time(NULL));
    // int n = rand() % p + 1;

    for (int i = 0; i < 1; i++)
    {
        int arr[p[i]];
        randomGenerator(arr, p[i]);
        // cout<<p<<"\n";
    // freopen("output.txt", "a+", stdout);

        // ofstream ofs("output.txt", ios::ate);
        cout << "Time complexity for " << p[i] << " elements\n\n";
        averageCase(p[i], arr);
        bestCase(p[i], arr);
        worstCase(p[i], arr);
        cout << "\n\n\n";
    }
    system("pause");
}