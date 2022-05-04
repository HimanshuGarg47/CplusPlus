#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int A , B;
       cin >> A >> B;
       A *= 10;
       B *= 5;
       if(A == B)
       cout << "ANY\n";
       else if(A > B)
       cout << "FIRST\n";
       else
       cout << "SECOND\n";

   }
}