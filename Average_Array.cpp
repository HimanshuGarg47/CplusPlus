#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> vec(n);
        int j = 0, spaces = 0, frsp = 0;
        bool check = true;

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];

            if (i == 0)
            {
                j += vec[i];
                frsp += vec[i];
            }
            else
            {
                j += vec[i]-spaces;
            }


            if (j >= m && i < (n - 1))
            {
                check = false;
                break;
            }
            else
                {j += vec[i] + 1;
                spaces = vec[i];}


            if (j >= m && i < n - 1)
            {
                check = false;
                break;
            }
            else if(i == (n-1) && j>=m)
            {
               
                if(frsp  == (m-1-j))
                continue;
                else
                {
                    check = false;
                    break;
                }
            }
        }

        if (!check)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}