#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(int arr[], int i, int j)
    {
        if (i >= j)
            return 0;

        int mn = INT_MAX;
        for (int k = i; k < j; k++)
        {
            int temp = solve(arr, i, k) + solve(arr, k + 1, j) + (arr[i-1] * arr[k] * arr[j]);
            mn = min(temp, mn);
        }

        return mn;
    }

    int matrixMultiplication(int N, int arr[])
    {
        return solve(arr, 1, N-1);
    }
};


// memoize dp solutioin
class Solution{
public:
    int dp[101][101];
    int solve(int arr[],int i , int j)
    {
        
        if(i >= j)
        return 0;
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        
        int mn = INT_MAX;
        for(int k = i;k<j;k++)
        {
            int temp = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
            mn = min(temp,mn);
        }
        
        
        return dp[i][j] = mn;
    }
    
    
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp,-1,sizeof(dp));
       return solve(arr, 1, N-1);
    }
};


int main()
{
    int arr[] = {10, 30, 5, 60};
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
     Solution s;

    cout << "Minimum number of multiplications is "
         << s.matrixMultiplication(N, arr);
    return 0;
}