#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
            int dp[x+1][y+1];
            for(int i = 0;i<=x;i++)
            dp[i][0] = 0;
            for(int j = 0;j<=y;j++)
            dp[0][j] = 0;
            
            for(int i = 1;i<=x;i++)
            {
                for(int j = 1;j<=y;j++)
                {
                    if(s1[i-1]==s2[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                    else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        
            return dp[x][y];
        
    }
};


int main()
{
   
}