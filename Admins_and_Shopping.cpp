#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> vec(n,0);

        int mini = INT_MAX;
        for(int i = 0;i<n;i++)
        {
            cin >> vec[i];
            if(vec[i] < mini)
            mini = vec[i];
        }
        if (n >= k)
        {
            cout << n << endl;
            continue;
        }
        
        
        cout << min(n,k/mini) << endl;
    }
}