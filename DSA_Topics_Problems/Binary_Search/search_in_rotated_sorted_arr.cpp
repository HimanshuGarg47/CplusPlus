#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        return find(0,nums.size()-1,nums,target);
    }
    
    int find(int low,int high,vector<int>& nums, int &target)
    {
        if(low <= high)
        {
            int mid = low+(high-low)/2;
            
            if(nums[mid] == target)
                return mid;
            
            if(nums[low] <= nums[mid])
            {
                if(target >= nums[low] && target <= nums[mid])
                   return find(low,mid-1,nums,target);
                
                else
                    return find(mid+1,high,nums,target);
            }
            else //if(nums[mid] <= nums[high])
            {
                if(target >= nums[mid] && target <= nums[high])
                    return find(mid+1,high,nums,target);
                    
                else
                    return find(low,mid-1,nums,target);
                    
            }
            
        }
       // else
        return -1;
        
    }
};
int main()
{
   vector<int> nums = {5,1,3};
   int target = 3;

   Solution sol;

   cout << sol.search(nums, 3);
}