#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t , n;
   cin >> t;
   int arr[31] = {0};
       int count = 0;
       for(int i = 6;i<=30;)
       {
           arr[i] = arr[i+1] = 1;
           
           i += 7;
       }
   while(t--)
   {
       cin >> n;
        count = 8;

       int temp;
       for(int i = 0;i<n;i++)
       {
           cin >> temp;
           if(arr[temp] == 1)
           continue;
           else
           count++;
       }
      cout << count << endl;
       






   }
}