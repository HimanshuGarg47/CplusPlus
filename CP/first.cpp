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
        int n;
        string a, ans = "";
        cin >> n;
        cin >> a;
        int temp;

        if (a[0] == '1' && a[1] == '1')
        {
            ans += '-';
            temp = 0;
        }
        else
        {
            ans += '+';
            temp = int(a[0] - '0') + int(a[1] - '0');
        }

        for (int i = 2; i < n; i++)
        {
            if (temp == 1 && a[i] == '1')
            {
                temp = 0;
                ans += '-';
            }
            else
            {
                ans += '+';
                temp = temp + int(a[i] - '0');
            }
        }
        cout << ans << endl;
    }
}