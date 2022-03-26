#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> vec(4);
        int temp;
        for(int i= 0;i<4;i++)
        {
            cin >> temp;
            vec[i]   = temp;
        }
        sort(vec.begin(), vec.end());
        int a, b;
        b = (abs(vec[0] - vec[2])) /2;
        a = (vec[2] - b);
        if ((a * b )== vec[3] && a > 0 && b > 0 && vec[0] < 0)
        {
            if (b != 0)
            {
                if (floor(a / b) == vec[1])
                    cout << a << " " << b << endl;
                else
                    cout << "-1 -1" << endl;
            }
            else
            {
                if (floor(b / a) == vec[1])
                    cout << a << " " << b << endl;
                else
                    cout << "-1 -1" << endl;
            }
        }
        else 
        {
            cout << "-1 -1" << endl;
        }

        // C++ program to print all prime factors

        /* Driver code */
    }
}