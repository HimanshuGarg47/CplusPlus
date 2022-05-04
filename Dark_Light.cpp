#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k)
        {
            if(n%4 != 0)
            cout << "Ambiguous\n";
            else
            cout << "On\n";
        }
        else
        {
            if(n % 4 == 0)
            cout << "Off" << endl;
            else
            {
               
                cout << "On\n";
            }
        }
        
      
    }
}