#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool validPalindrome(string s)
    {

        unsigned short int ch = 0, i = 0;
        int j;

        j = s.length();
        if (j < 3)
            return true;
        j--;

        while (i <= j)
        {

            if (s[i] != s[j])
            {
                if (j - i > 3)
                {
                    if (s[i + 1] == s[j]  && s[i + 2] == s[j - 1])
                    {

                        ch++;
                        i++;
                    }
                    else if (s[i] == s[j - 1] && s[i + 1] == s[j])
                    {
                        ch++;
                        j--;
                    }
                     else
                    return false;

                    
                }

                else
                    {
                        if (s[i + 1] == s[j] && s[i + 2] == s[j - 1])
                        {

                            ch++;
                            i++;
                        }
                        else if (s[i] == s[j - 1] && s[i + 1] == s[j])
                        {
                            ch++;
                            j--;
                        }
                         else
                    return false;
                    }
                

               
            }
            else if (i == j && ch == 0)
                return true;
            else
            {
                i++;
                j--;
            }
        }
        if (s[i] == s[j] && ch == 0)
            return true;
        return ch == 1 ? true : false;
    }
};

int main()
{
    Solution sol;
    cout << (bool)sol.validPalindrome("ebcbbececabbacecbbcbe");
}
// "aba"
// "abca"
// "abc"
// "eeccccbebaeeabebccceea"
// "bddb"
// "cxcaac"
// "ebcbbececabbacecbbcbe"
// "cupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupucu"