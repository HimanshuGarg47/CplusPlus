#include <iostream>
using namespace std;
int main()
{

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int n, m;
    int k, l;
    k = l = 99;
    cin >> n >> m;
  //  cout << n << m << endl;


    int arr[100][100];

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            arr[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    // }

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (arr[i][j] == 0 && arr[k][j] != 0 && arr[i][l] != 0)
            {

                k = i;
                l = j;
                for (int o = 0; o < n; o++)
                {
                    arr[k][o] = 0;
                }
                for (int o = 0; o < m; o++)
                {
                    arr[o][l] = 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    
}