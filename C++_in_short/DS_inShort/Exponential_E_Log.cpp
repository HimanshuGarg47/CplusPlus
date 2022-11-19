#include <bits/stdc++.h>
using namespace std;
int main()
{
   const long long int M = 10000000007;
    long long int mul = 1;
  int  n = 24;
   for(int i = 1;i<=n;i++)
   {
       mul *= i;

   }
    cout << mul;
}