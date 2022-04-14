#include <bits/stdc++.h>
using namespace std;

void evenprint(void)
{
    int n , x;
    cin >> n >> x;
    for(int i = 1;i<=n/2;i++)
    {
        cout << x+i << " ";
    }
    if(n%2)
    cout << x << " ";
     for(int i = 1;i<=n/2;i++)
    {
        cout << x-i << " ";
    }
    cout << endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        evenprint();
       
    }
}