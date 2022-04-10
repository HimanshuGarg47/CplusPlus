#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0,sum = 0,temp = 0;
    
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
        }
        for (int i = 1; sum > 0; i++)
        {
            sum -= i;
            ++ans;
        }
        if (sum < 0)
            ans -= 1;
        cout << ans << endl;
    }
    return 0;
}