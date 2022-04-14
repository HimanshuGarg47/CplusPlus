#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;

   while(t--)
   {
       int x,n;
       cin >> n >> x;
       vector<int> vec(n-1);
       int sum = 0;
       for(int i = 0;i<n-1;i++)
       {
           cin >> vec[i];
           sum += vec[i];
       }
       
       int cal = (x*n)-(sum);
       if(cal <= 0)
       cout << 0 << endl;
       else
       cout << cal << endl;
   }
}