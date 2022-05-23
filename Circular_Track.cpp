#include <bits/stdc++.h>
using namespace std;
int min(int a , int b)
{
    return a < b?a:b;
}
int max(int a , int b)
{
    return a > b?a:b;
}


int ab(int x)
{
    if(x >= 0)
    return x;
    else 
    return -1*x;
}
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int a , b , m;
       cin >> a >> b >> m;
       cout << min((m+min(a,b)-max(a,b)),ab(a-b)) << endl;

   }
}