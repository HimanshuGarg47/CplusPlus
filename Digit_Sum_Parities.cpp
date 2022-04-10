#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         long long int number, N,sum = 0;
        cin >> number;
        N = number;
        while (N != 0)
        {
            sum += N % 10;
            N = N / 10;
        }

        
        if (sum % 2 == 0)
        {
            int tsum = 0;
            while (tsum % 2 != 1)
            {
                tsum = 0;
                 N = number + 1;
                 ++number;
                 
                while (N != 0)
                {
                    tsum += N % 10;
                    N = N / 10;
                }
            }
            cout << number << endl;
        }
        else
        {
            cout << (number + 1) << endl;
        }
    }
}