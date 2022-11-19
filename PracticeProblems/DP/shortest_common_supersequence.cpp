#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        // LCS code
        int dp[m + 1][n + 1];
        for (int i = 0; i <= m; i++)
            dp[i][0] = 0;
        for (int j = 0; j <= n; j++)
            dp[0][j] = 0;

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (X[i - 1] == Y[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        // subtract common LCS from one of string
        return (m - dp[m][n] + n);
    }

    // function to print scs
    string lcs(int x, int y, string &str1, string &str2)
    {
        int dp[x + 1][y + 1];
        for (int i = 0; i <= x; i++)
            dp[i][0] = 0;
        for (int j = 0; j <= y; j++)
            dp[0][j] = 0;

        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                if (str1[i - 1] == str2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        int i = x, j = y;
        string ans = "";
        while (i > 0 && j > 0)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                ans = ans + str1[i - 1];
                i--;
                j--;
            }
            else
            {
                if (dp[i - 1][j] >= dp[i][j])
                {
                    ans = ans + str1[i - 1];
                    i--;
                }
                else // if(dp[i][j-1] > dp[i][j])
                {
                    ans = ans + str2[j - 1];
                    j--;
                }
            }
        }

        while (i > 0)
        {
            ans = ans + str1[i - 1];
            i--;
        }

        while (j > 0)
        {
            ans = ans + str2[j - 1];
            j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string shortestCommonSupersequence(string str1, string str2)
    {
        int n = str1.length(), m = str2.length();
        return lcs(n, m, str1, str2);
    }
};
int main()
{
    class Solution s;

    string str1 = "abac", str2 = "cab";
    cout << s.shortestCommonSupersequence(str1, str2);
}