#include <bits/stdc++.h>
using namespace std;
bool BubbleSort(vector<long int> &vec, int n)
{
    int count = 0;
    for (int j = 0; j < n - 1; j++)
    {

        if (vec[j] > vec[j + 1])
        {
            swap(vec[j], vec[j + 1]);
            count++;
        }
        if(count > 1)
        return false;
    }
     for (int j = 0; j < n - 1; j++)
    {

        if (vec[j] > vec[j + 1])
        {
            swap(vec[j], vec[j + 1]);
            count++;
        }
        if(count > 1)
        return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long int> vec(n);
        for (int j = 0; j < n; j++)
        {
            cin >> vec[j];
        }
        if (BubbleSort(vec, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}