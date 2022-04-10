#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        if (n == 1 && m == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        int target = mat[0][0];
        int sum;
        bool check = true;

        if (mat[0][0] == mat[n - 1][m - 1])
        {

            int i;
            for (i = 1; i < n; i++)
            {
                sum = 0;
                for (int y = i; y >= 0; y--)
                {
                    for (int z = 1; z < m; z++)
                    {
                        sum += mat[y][z];
                    }
                }
                if (sum == target)
                    continue;
                else
                {
                    check = false;
                    break;
                }
            }

            if (n > m && n > 1)
            {


                 if (i == n)
                {
                    // for(int x = m-1;x>n;x--)
                    for (int x = 1; x < n-m + 1; x++)
                    {
                        sum = 0;
                        for (int y = n-1; y >= n-m+x; y--)
                        {
                            for (int z = n - 1; z >= 1 && y < m; z--)
                            {
                                sum += mat[z][y];
                            }
                        }
                        if (sum == target)
                            continue;
                        else
                            check = false;
                    }
                }


            }

            else if (m > n && m > 1) // if(m > n)
            {

                if (i == m)
                {
                    // for(int x = m-1;x>n;x--)
                    for (int x = 1; x < m - n + 1; x++)
                    {
                        sum = 0;
                        for (int y = m - 1; y > n; y--)
                        {
                            for (int z = n - 1; z >= m - n; z--)
                            {
                                sum += mat[z][y];
                            }
                        }
                        if (sum == target)
                            continue;
                        else
                            check = false;
                    }
                }
            }

            int ans;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    ans = 0;
                    if ((i - 1) >= 0)
                        ans += mat[i - 1][j];
                    if ((j - 1) >= 0)
                        ans += mat[i][j - 1];
                    if (ans == mat[0][0])
                        continue;
                    else
                    {
                        check = false;
                        break;
                    }
                }
                if (check == false)
                    break;
            }
            if (check == false)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}