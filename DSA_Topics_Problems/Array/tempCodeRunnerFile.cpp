#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    int k = 99, l = 99;
    cin >> n >> m;
    int arr[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if ((arr[i][j] == 0 && arr[k][j] != 0 && arr[i][l] != 0) || arr[i][j] == INT_MAX)
            {

                k = i;
                l = j;
                for (int o = 0; o < n; o++)
                {
                    if (arr[k][o] == 0 && o != k)
                    {
                        arr[k][o] = INT_MAX;
                    }
                    arr[k][o] = 0;
                }
                for (int o = 0; o < m; o++)
                {
                    if (arr[o][l] == 0 && o != l)
                    {
                        arr[o][l] = INT_MAX;
                    }
                    arr[o][l] = 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";

        }
        cout << "\n";
    }
}