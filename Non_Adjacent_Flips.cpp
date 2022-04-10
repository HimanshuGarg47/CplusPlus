#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                if(even.empty())
                {
                    even.push_back(i);
                }
                else if ((abs(even.back()-i))>1)
                {
                    even.push_back(i);
                }
                else
                    odd.push_back(i);
            }
        }
        int count = 0;
        if (!odd.empty())
            ++count;
        if (!even.empty())
            ++count;
         cout << count << endl;
    }
}