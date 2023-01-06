#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int b, c; // a is 1
        b = c = 0;
        bool checknp = true;

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                // If divisors are equal, print only one
                b = i;
                c = n / i;
                checknp = false;
                break;
            }
        }
        if (checknp || b == c)
            cout << -1 << endl;

        else
        {
            cout << 1 << " " << b << " " << c << endl;
        }
    }
    return 0;
}
