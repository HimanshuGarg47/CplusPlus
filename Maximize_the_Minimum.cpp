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
        vector<int> vec(n);
        int temp;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            vec.push_back(temp);
        }

        pair<int, int> min, max;
        min.first = INT_MAX, max.first = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] < min.first)
            {
                min.second = i;
                min.first = vec[i];
            }

            if (vec[i] > max.first)
            {
                max.second = i;
                max.first = vec[i];
            }
        }

        if(min.second > 0)
        {

        }
        else if(min.second >= 0)
        {
            if(max.second > min.second)
        }
    }
}