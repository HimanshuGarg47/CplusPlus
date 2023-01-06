#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &time, int &m, int barrier, int days)
{
        int allocated_stu = 1,temp = 0;;
      
        for(int i = 0;i<m;i++)
        {
            if(time[i] > barrier)
            return false;

            if ((temp + (long long)time[i]) > barrier)
            {
               allocated_stu += 1;
               temp = 0;
            }
            else
            {
               temp += time[i];
            }

        }
    if(allocated_stu > days)
    return false;

    return true;
}


long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    long long high = 0, mid,res;
    int low = INT_MAX;
    // int low = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        low = min(low, time[i]);
        high += time[i];
    }
    //ans = high;

    while (low <= high)
    {

        mid = low + ((high - low) >> 1);
     //   cout << "low " << low << " mid " << mid << " high " << high << endl;
     if(isPossible(time,m,mid,n))
     {
        res = mid;
        high = mid-1;
        
     }
     else
     low = mid+1;
       
    }
 //   if(ans == high)
    
    return res;
}

int main()
{
    int n = 8,m = 9;
    vector<int> vec = {7,10,5,2,1,8,4,5,10};
    cout << ayushGivesNinjatest(n,m,vec);
}