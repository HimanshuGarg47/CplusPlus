#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    int n, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        int ans = 10000;
        for (int i = 0; i <= ceil(n / 100.0); i++)
        {
           int cars = max((double)0,ceil((n-i*100)/4.0));
            ans = min(ans,(i*x + cars*y));
        }
        cout << ans << endl;
    }
}