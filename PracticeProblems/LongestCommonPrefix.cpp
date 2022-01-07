#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ss = strs[0],res = "";
        bool ch = true;
        int i=1,k = 0,row1_size = strs[0].length();
        for(int j = 0;j<strs[i].length();j++)
        {
             for(;i<strs.size();i++)
             {
                 if(k < row1_size)
                  if(ss[k] != strs[i][j])
            {
                 ch = false;
            }
             }
           if(ch)
           {
               res += strs[0][k++];
               ch = true;
           }
        }
        return res;
    }
};


int main()
{
    vector<string> str = {"flower","flow","flight"};
    Solution solution;

    cout << solution.longestCommonPrefix(str);
}