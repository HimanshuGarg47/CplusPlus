#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = *a;
}


int main()
{
    int n;
    cout << "Enter size of array\n";
    cin >> n;
    // int *ptr = (int *)malloc(n*sizeof(int)); 
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
    {
        cout << "arr[" << i << "] ==>  ";
        cin >> arr[i];
    }

    int  j , k;
    cout << "\nArray before sorting is\n";
    for(auto i : arr)
    {
        cout << i << " ";
    }

    cout << "\nAfter Selection Sort : \n";
    for(int i = 0;i<= n-2;i++)
    {
        j = i+1;
        for(k = i;j<n;j++)
        {
            if(arr[j] < arr[k])
            k = j;
        }
            swap(arr[k],arr[i]);
    }

    for(int i = 0;i<n;i++)
    {
        cout << arr[i]  << " ";
    }
    cout << endl;
    system("pause");
}



