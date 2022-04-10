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
       vector<int> odd,even;
       int count = 0 , temp;
       for(int i = 0;i<n;i++)
       {
           cin >> temp;
           if(temp % 2 == 0)
           {
               even.push_back(temp);
           }
           else
           odd.push_back(temp);
       }

       if(even.empty() || odd.empty())
       {
           cout << 0 << endl;
           continue;
       }    

       if(even.size() <= odd.size())
        {
            if(odd.size()%2 == 0)
            cout << min((odd.size()/2),even.size()) << endl;
            else
            {
                cout << even.size() << endl;
            }
        }
        else// if(even.size() > odd.size())
        {
            if(odd.size()%2 == 0)
            cout << odd.size()/2 << endl;
            else
            cout << even.size() << endl;
        }
        // else
        // {
        //     if(odd.size()%2==0)
        //     cout << odd.size()/2 << endl;
        //     else
        //     cout << odd.size() << endl;
        // }


   }




}