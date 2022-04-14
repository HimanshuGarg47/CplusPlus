#include <bits/stdc++.h>
using namespace std;

long int fact(long int n);

long int nCr(long int n, long int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
long int fact(long int n)
{
    long int res = 1;
    for (long int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

 int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;

        int number;
        long int pos = 0, neg = 0;
        for (long int i = 0; i < n; i++)
        {
            cin >> number;
            if (number > 0)
                ++pos;
            else if (number < 0)
                ++neg;
            
        }
        long int ans = 0;
        long int temp;
        if(neg > 2)
         temp = nCr(neg, 2);

         else if(neg == 2)
         temp = 1;
         else 
         temp = 0;
        
            ans += temp;

        



        if(pos > 2)
        temp = nCr(pos, 2);
        else if(pos == 2)
        temp = 1;
        else 
        temp = 0;
        
            ans += temp;

        cout << ans << endl;
    }
}