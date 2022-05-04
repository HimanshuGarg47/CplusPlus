#include <bits/stdc++.h>
using namespace std;
int ab(int x)
{
    if(x < 0)
    return -1*x;
    return x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> vec(n);
        int one = 0, none = 0;
        int count = 0;
        int j = 2;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] == 1)
                one++;
            else
                none++;

           
        }
        // while(j < n)
        // {
        //     if(j == n-1)
        //     count++;
        //     else
        //     {
        //         count += 2;
        //     }
        //     j+= 4;
        // }
        if(n == 3)
        {
            if(one == 1 || none == 1)
            cout << "Yes\n";
            else
            cout << "No\n";
        }
        else if(ab(one-none) < 2 || (ab(one-none)== 2 && none%2 == 0))
        cout << "Yes\n";    
        else
        cout << "No\n";
        // else if(count == one || count == none)
        // cout << "Yes\n";
        // else
        // cout << "No\n";
    }
}