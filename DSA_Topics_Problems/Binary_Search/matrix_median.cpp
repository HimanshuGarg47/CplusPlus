#include <bits/stdc++.h>
using namespace std;

int Count_no_elements_lte_mid(vector<vector<int>> &A, int x)
{
    int n = A.size(), m = A[0].size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int left = 0, high = m - 1, mid;
        while (left <= high)
        {
            mid = (left + high) >> 1;
            if (A[i][mid] > x)
            {
                high = mid - 1;
            }
            else if (A[i][mid] <= x)
            {
                left = mid + 1;
            }
        }
        count += left;
    }
    return count;
}
int findMedian(vector<vector<int>> &A)
{
    int left = 1, right = 1e9;
    int mid, mid_idx_of_matx = (A.size() * A[0].size()) >> 1;

    while (left <= right)
    {
        mid = left + ((right - left) >> 1);

        if (mid_idx_of_matx >= Count_no_elements_lte_mid(A, mid))
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left;
}

int main()
{
}