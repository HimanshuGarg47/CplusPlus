#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<pair<int,int>> temp;
        int sum=0,i = 0,j=nums.size()-1;

        
        for(int k = 0;k<=j;k++)
        {
            temp.push_back(make_pair(nums[k],k));
        }
       sort(temp.begin(),temp.end());
 
    while (i < j) {
 
        sum = temp[i].first + temp[j].first;
        if (sum == target)
        {
            result.push_back(temp[i].second); 
             result.push_back(temp[j].second); 
            return result;

        }
            
 
       
        else if (sum < target)
            i++;
 

        else
            j--;
    }
         return result;
    }
};
int main()
{
    vector<int> arr = {3,2,4};

     Solution solution;
     vector<int>sol = solution.twoSum(arr,6);
     cout << sol[0] << " " << sol[1]<< endl;




}