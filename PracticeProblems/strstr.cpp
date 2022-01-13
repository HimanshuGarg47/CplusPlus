#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int k =0,haysize = haystack.size(),needsize = needle.length(),i = 0,j=0, index = i;
        if(needsize == 0)
            return 0;
        if(haysize == 0)
            return -1;
        if(needle == haystack)
            return 0;
        for(;i<haysize;i++)
        {
            if(haystack[i] == needle[j])
            {
                k = index = i;
                while(haystack[k] == needle[j] && k<haysize)
                {
                    k++;
                    j++;
                }
                if(j == needsize)
                    return index;
                j = 0;
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    cout << sol.strStr("mississippi","issip");
    }