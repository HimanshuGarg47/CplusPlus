#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        cin >> n;
        vector<int> vec(n);

       
        pair<int, int> small, larg;
        small.first = INT_MAX, larg.first = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp < small.first)
            {
                small.first = temp;
                small.second = i + 1;
            }

            if (temp > larg.first)
            {
                larg.first = temp;
                larg.second = i + 1;
            }

            vec.push_back(temp);
        }
        cout << small.second << " " << larg.second << endl;
    }
}