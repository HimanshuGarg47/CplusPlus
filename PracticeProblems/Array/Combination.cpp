#include <bits/stdc++.h>
using namespace std;

void Comb(vector<int> &vec, vector<int> ans, int start, int &end, int r, int index)
{
    if (index == r)
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    for (int i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        ans[index] = vec[i];
        Comb(vec, ans, i + 1, end, r, index + 1);
    }
}


int main()
{
    vector<int> vec = {1,2,3,4};

    int end = vec.size() - 1;
    vector<int> ans(2);
     Comb(vec, ans, 0, end,2, 0);
    // for (int i = 1; i <= end+1; i++)
    // {
    //     vector<int> ans(i);
    //     Comb(vec, ans, 0, end, i, 0);
    // }
}