#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >>t;
   while(t--)
   {
       int x,y;
       cin >> x >> y;
       int c = 0;
       if(x < y)
       {
           while(x != y)
           {
               x += 2;
               y += 1;
               c++;
           }
           cout << c << endl;
           
       }
       else
       {
           while(x != y)
           {
               x -= 2;
               y -= 1;
               c++;
           }
           cout << c << endl;
       }
   }
}