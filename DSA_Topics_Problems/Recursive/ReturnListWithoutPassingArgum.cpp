#include <iostream>
#include <vector>
using namespace std;

// vector<int> findAllIndex(vector<int> &arr, int target, int index, vector<int> &ans)
// {
//     if(index == arr.size())
//     return ans;

//     if(arr[index]==target)
//     ans.push_back(index);

//     return findAllIndex(arr,target,index+1,ans);
// }

vector<int> findAllIndex(vector<int> &arr, int target, int index)
{
    if(index == arr.size())
    return {};

    vector<int> ans;

    if(arr[index]==target)
    ans.push_back(index);

    vector<int> list = findAllIndex(arr,target,index+1);
    ans.insert(ans.end(), list.begin(), list.end());
    return ans;
}




int main()
{
    vector<int> arr = {1,2,3,4,4,4,4,4,4,8};
   vector<int> ans;
    
    // vector<int> list = findAllIndex(arr,4,0,ans);
        vector<int> list = findAllIndex(arr,4,0);

    for(auto i : list)
    {
        cout << i << " "; 
    }
}