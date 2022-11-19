#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 15, 18, 19, 20};
    int H[21]={0};
    int diff = arr[0] - 0;
  //  int sum = 0;
  //  int n = arr[8] * (arr[8] + 1) / 2;
    // for(int j = 0;j<sizeof(arr)/sizeof(arr[0]);j++)
    // {
    //     sum += arr[j];
    // }
    // cout << "Missing element is with using formula of n*(n-1)/2    " << n-sum << endl;
    // for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++)
    // {
    //     if(arr[i]-i!=diff)
    //     {
    //         cout << "Missing element is " << diff+i << endl;
    //     }
    // }

    for(int i = 0;i<14;i++)
    {
        H[arr[i]]++;
    }

    for(int i = 1;i<21;i++)
    {
        if(H[i] == 0)
        cout << "missing element is " << i << endl;
    }
    for ( int i = 0; i < 14; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << "Missing element is " << diff + i << endl;
                diff++;
            }
        }
    }
}