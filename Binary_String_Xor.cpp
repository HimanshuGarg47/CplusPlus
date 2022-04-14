#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int n , k;
       cin >> n >> k;
       string bin;
       cin >> bin;
        int one = 0,zero = 0;
       for(int i = 0;i<n;i++)
       {
           if(bin[i] == '1')
           ++one;
           else
           ++zero;
       }
       if(one == k || zero == k)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
   }
}