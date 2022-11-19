#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &vec, int barr, int &c)
{
    int count = 1, temp = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        if ((vec[i] - temp) >= barr)
        {
            count += 1;
            temp = vec[i];
        }
    }
    if (count >= c)
        return true;
    return false;
}
int chessTournament(vector<int> positions, int n, int c)
{
    vector<int> sorted_pos = positions;
    sort(sorted_pos.begin(), sorted_pos.end());
    int res;
    int high = sorted_pos[n - 1], low = 1;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);

        if (isPossible(sorted_pos, mid, c))
        {
            res = mid;
            low = mid + 1;
        }

        else
            high = mid - 1;
    }
    return res;
}

int main()
{
}