#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (a - 1 == b || a + 1 == b || a + 2 == b || a - 2 == b)
        {
            if (a == 1 || a == n || b == 1 || b == n)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            cout << "0" << endl;
        }
    }
}