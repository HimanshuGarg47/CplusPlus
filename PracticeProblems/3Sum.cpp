#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
        // sort(nums.begin(),nums.end());
        // int i = 0, len = nums.size()-1;
        // for(int i = 0;i<len-2;i++)
        // {
        //     for(int j = i+1;i<len-1;j++)
        //     {
        //         if(i==j)
        //             continue;
        //         for(int k = j+1;j<len;j++)
        //         {
        //             if(j==k || i==k)
        //             continue;
        //             if((nums[i] + nums[j] + nums[k]) == 0 )
        //             {
        //                 temp.push_back(i);
        //                 temp.push_back(j);temp.push_back(k);
        //                 res.push_back(temp);
        //                 temp.clear();
        //             }
        //         }
        //     }
        // }
        // return res;
        
            vector<vector<int>> res;
        vector<int> temp,temp1;
       
 
   int n = nums.size();
    sort(nums.begin(),nums.end());
 bool diff = false;
    for (int i=0; i<n-1; i++)
    {
        // initialize left and right
        int l = i + 1;
        int r = n - 1;
        int x = nums[i];
        while (l < r)
        {
            if(l!=r && i!=l && i!=r)
            {
                 if (x + nums[l] + nums[r] == 0)
            {
                l++;
                r--;
                 if(!diff)
                 {
                     temp.push_back(x);
                    temp.push_back(nums[l]);
                      temp.push_back(nums[r]);
                     diff = true;
                 }
                else
                {
                     temp1.push_back(x);
                    temp1.push_back(nums[l]);
                      temp1.push_back(nums[r]);
                     diff = false;
                }
               if(!diff && temp !=temp1)
               {
                res.push_back(temp1);
                   temp.clear();
               }
                else
                {
                     res.push_back(temp);
                      temp1.clear();
                }
                      break;
            }
 
            // If sum of three elements is less
            // than zero then increment in left
            else if (x + nums[l] + nums[r] < 0)
                l++;
 
            // if sum is greater than zero than
            // decrement in right side
            else
                r--;
            }
           
        }
    }
        return res;
 
   
    }
};



int main()
{
    vector<int> arr = {3,2,4};

     Solution solution;
     vector<vector<int>>sol = solution.threeSum(arr);




}