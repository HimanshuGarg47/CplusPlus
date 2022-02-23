#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i,t;
    string bin;
    bool ch;
    cin >> t;
    while (t--)
    {
        cin >> bin;
        n = bin.size();
        ch = false;
        i =0;
        while(i < n - 1)
        {
            if (bin[i++] == '1')
            {
                if (bin[i] == '0' || bin[i] == '1')
                {
                    ch = true;
                   break;
                }
            }
        }
        ch ? cout <<"Yes" : cout << "No";

        cout << endl;
    }
}