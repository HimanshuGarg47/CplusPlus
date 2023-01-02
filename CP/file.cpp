#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> vec(m);

        bool equal = true;

        for (int i = 0; i < m; i++)
        {
            cin >> vec[i];
        }

        if(k == 1)
        {
            cout << "YES\n";
        }
        else if (k > m)
        {
            cout << "NO" << endl;
        }
        else if (k == m)
        {
            for (int i = 0; i < m - 1; i++)
            {
                if (vec[i] != vec[i + 1])
                {
                    equal = false;
                    break;
                }
            }
            if (equal)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else  // if m > k
        {
            
        }
    }
}