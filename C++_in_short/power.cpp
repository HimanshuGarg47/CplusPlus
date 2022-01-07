#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        float prod = 1;
        vector<float> nums1;

        for(int i = 0;i<n;i++)
        {
            prod *= nums[i];
           
        }


        for(int i = 0;i<n;i++)
        {
            
            nums1.push_back((pow(nums[i],-1)*prod));
           
        }
        
        vector<int>nums2(nums1.begin(),nums1.end());
        return nums2;
    }
};


int main() {

vector<int> v1 = {-1,1,0,-3,3};
Solution sol;
 vector<int> res = sol.productExceptSelf(v1);
  // computes 5 raised to the power 3
  cout << endl;
  for(auto it = res.begin();it!=res.end();it++)
  {
      cout << *it << " ";
  }

  return 0;
}