#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    double median(vector<int> &nums)
    {
        if(nums.size()&1)
                return nums[nums.size()>>1];
            else
                return ((double)nums[nums.size()/2]+(double)nums[nums.size()/2-1])/2;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.empty())
            return median(nums2);
        if(nums2.empty())
            return median(nums1);
        
        int n = nums1.size(),m=nums2.size();
        vector<int> nums(n+m,0);
        int i = 0,j = 0,k =0;
        while(i < n && j < m)
        {
            if(nums1[i] < nums2[j])
            {
                nums[k++] = nums1[i++];
            }
            else
                nums[k++] = nums2[j++];
        }
        
        while(i < n)
            nums[k++] = nums1[i++];
        while(j < m)
             nums[k++] = nums2[j++];
        
        for(auto i:nums)
            cout << i << " ";
        return median(nums);
        
        
        
    }
};

int main()
{
   Solution s;
   vector<int> nums1 = {1,3},nums2 = {2};
   cout << s.findMedianSortedArrays(nums1,nums2);

}