#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, z, y, j, temp1, m, k, t;
    vector<int> fun;
    vector<pair<int, int>> indexing;
    bool ch = false;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        m = n;
        z = n / 2;
        y = z;
        j = 1;
        // vec.resize(n);      // start from 1 to n-1 , 0and n waste
        indexing.resize(n);
        indexing.clear();
        fun.resize(z + 2);
        fun.clear();
        ch = true;
        for (int i = 2; i <= n / 2; i++) // index start from 1 to z/2
        {
            if (ch)
            {
                fun[i] = y--; // m,m-1,m-2,m-3
                ch = false;
            }
            else
            {
                fun[i] = j++; // 1,2,3,4,5
                ch = true;
            }
        }

        ch = true;
        j = 2;
        indexing.push_back(make_pair(n + 1, 1));
        indexing.push_back(make_pair(n + 2, 2));
        while (k--)
        {
            for (int i = 2; i <= n - 1; i++)
            {
                if (i <= )
                {
                    if (ch)
                    {
                        int temp1 = i + fun[j++];
                        indexing.push_back(make_pair(temp1, i));

                        ch = false;
                    }

                    else
                    {
                        int temp1 = abs(i - fun[j++]);
                        indexing.push_back(make_pair(temp1, i));
                        ch = true;
                    }
                }
                else
                {
                    if (ch)
                    {
                        temp1 = i + fun[j--];
                        indexing.push_back(make_pair(temp1, i));

                        ch = false;
                    }

                    else
                    {
                        temp1 = abs(i - fun[j--]);
                        indexing.push_back(make_pair(temp1, i));
                        ch = true;
                    }
                }
            }
        }

        sort(indexing.begin(), indexing.end());

        cout << "1 ";
        for (int i = 0; i < n - 2; i++)
        {
            cout << indexing[i].second << " ";
        }
        cout << n << endl;
    }
}