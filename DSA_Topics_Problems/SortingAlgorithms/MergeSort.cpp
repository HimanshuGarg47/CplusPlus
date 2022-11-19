#include <bits/stdc++.h>

using namespace std;

void Merging(vector<int> &arr, int low, int mid, int high)
{
    int l = low;
    int sec_low = mid + 1;
    int n = high - low + 1;
    vector<int> merge(n,0);
    int k = 0; // for index in merged array
    while (low <= mid && sec_low <= high)
    {
        if (arr[low] < arr[sec_low])
            merge[k++] = arr[low++];

        else
        {
            merge[k++] = arr[sec_low++];
        }
    }

    while (low <= mid)
    {
        merge[k++] = arr[low++];
    }

    while (sec_low <= high)
    {
        merge[k++] = arr[sec_low++];
    }

    for (int i = 0; i < n; i++)
    {
        arr[l++] = merge[i];
    }
}
void MergeSort(vector<int> &arr, int low, int high)
{

    while (low < high)
    {
        int mid = (low + high) / 2;

        MergeSort(arr, low, mid);
        //  Merging(arr,low,mid,high);

        MergeSort(arr, mid + 1, high);

        //    Merging(arr,low,mid,high);

        Merging(arr, low, mid, high);
        return;

    }
}
int main()
{
    vector<int> arr = { 2, 7, 9, 1, 12, 4,44,66,1 };
    int n = 8;
    for(int i : arr)
    {
        cout << i << " ";
    }
    
    MergeSort(arr, 0, n);
    cout << "\nAfter merge sort : ";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
}