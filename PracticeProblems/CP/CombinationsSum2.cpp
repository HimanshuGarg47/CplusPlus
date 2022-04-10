#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findCombinations(int index,vector<int> &candidates,set<vector<int>> &ans,vector<int> &ds,int target)
    {
        if(index == candidates.size())
        {
            if(target == 0)
            {
                
            ans.insert(ds);
            
           }
            return;
        }
        
        
        if(candidates[index] <= target)
        {
            ds.push_back(candidates[index]);
            findCombinations(index+1,candidates,ans,ds,target-candidates[index]);
            ds.pop_back();
        }
        findCombinations(index+1,candidates,ans,ds,target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> set_of_vectors;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        findCombinations(0,candidates,set_of_vectors,ds,target);

        vector<vector<int>> vec;
        for (auto it = set_of_vectors.begin();
         it != set_of_vectors.end();
         it++)
    {
        vector<int> temp;
        for(auto i = (*it).begin();i!=(*it).end();i++)
        {
            temp.push_back(*i);
        }
        vec.push_back(temp);  
    }
        return vec;
    }
};