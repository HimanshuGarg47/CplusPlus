#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int LongestRepeatingSubsequence(string str)
    {
        int x, y;
        x = y = str.length();
        int dp[x + 1][y + 1];
        for (int i = 0; i <= x; i++)
            dp[i][0] = 0;
        for (int j = 0; j <= y; j++)
            dp[0][j] = 0;

        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                if (str[i - 1] == str[j - 1] && i != j)
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[x][y];
    }
};
int main()
{
}