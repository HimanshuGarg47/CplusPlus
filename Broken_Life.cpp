#include <bits/stdc++.h>
using namespace std;

bool isSubSequence(string &str1, string &str2)
{
    int j = 0; // For index of str1 (or subsequence

    // Traverse str2 and str1, and
    // compare current character
    // of str2 with first unmatched char
    // of str1, if matched
    // then move ahead in str1
    for (int i = 0; i < str1.size() && j < str2.size(); i++)
        if (str2[j] == str1[i])
            j++;

    // If all characters of str1 were found in str2
    return (j == str2.size());
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        int count = 0;
        vector<char> unio = {'a', 'b', 'c', 'd', 'e'};
        vector<char> ans = {'a', 'b', 'c', 'd', 'e'};

        // for (int i = 0; i < unio.size(); i++)
        // {

        //     if (s2.find(unio[i]) != string::npos)
        //     {
        //         unio.erase(find(unio.begin(), unio.end(), unio[i]));
        //         // remove(unio.begin(), unio.end(), unio[i]);
        //     }
        // }

        if (isSubSequence(s1, s2))
        {
            cout << "-1" << endl;
            continue;
        }
        int sz;
        sz = n - 1;
        while (sz >= 0)
        {
            if (s1[sz] == '?')
            {

               
                    int j = 0;
                    s1[sz] = ans[j];
                    while (!isSubSequence(s1, s2) && j < 5)
                    {
                        s1[sz] = ans[j++];
                    }
                    if (j == 5)
                    {
                        cout << "-1" << endl;
                        break;
                    }
                
              
            }

            sz--;
        }
        cout << s1 << endl;
    }
}