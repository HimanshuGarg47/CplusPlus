#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int main()
{
    int n, k, t;
    int arr[MAX];

    // cin >> t;

    // while(t--)
    // {ṁṁ
    cin >> n >> k;

    // int temp = n / 2 - 2, even = n / 2 - 1;
    // int odd = n - 3;
    arr[0] = 1;
    arr[n - 1] = n;
    int i = 1,j = 1;
    while(i < n - 1)
    {
        if (i < n / 2)
        {
            j = i + 2;
            arr[i] = j;
            i++;
        }
        else
        {
            j = 2;
            arr[i++] = j;
            j = j+2;
        }
    }
    // for(int i = 0;i<n;i++)
    // {
    //     arr[i] = i+1;
    // }
    // for(int i = 0;i<k;i++)
    // {
    //     for(int j = 1;j<n-i-2;j+2)
    //     {
    //         temp = arr[j];
    //         arr[j] = arr[j+1];
    //         arr[j+1] = temp;
    //         }
    // }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // }
}