#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      string s;
      cin >> s;
      bool check = false;
      for(int i = 0;i<n;i++)
      {
         if(s[i]=='0' || s[i] == '5')
         {
            check = true;
            break;
         }
         
      }
      if(check)
      cout << "Yes" << endl;
      else
      cout << "No" << endl;

   }
   
}