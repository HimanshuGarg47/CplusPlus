#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t , n;
   cin >> t;
   while(t--)
   {
       cin >> n;
       if(n == 2)
       cout << -1;
       else if(n % 2 == 1)
       for(int i = 1;i<=n;i++)
       {
           cout << i << " ";
       }
       else
       {
           for(int i = n;i>4;i--)
           {
               cout << i << " ";
           }
           cout << 4 << " " << 1 << " " << 3 << " " << 2;
       }
       cout << endl;
   }
}