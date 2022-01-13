
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int check(char s)
    {
        switch (s)
        {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
    }
    int romanToInt(string s) {
        int temp = 0,j=s.length(),ans = check(s[0]);
        if(j == 1)
        return ans;
        for(int i = 1;i<j;i++)
        {
            temp = check(s[i]);
            if(ans < temp)
            {
                ans = temp-ans; 
            }
            else{
                ans+=temp;
            }

        }
        return ans;
    }
};

int main()
{

}