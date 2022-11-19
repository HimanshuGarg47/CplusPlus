#include <bits/stdc++.h>
using namespace std;

vector<string> retPerm(string p, string up)
{
    if (up.empty())
    {
        vector<string> vec;
        vec.push_back(p);
        return vec;
    }
    else
    {
        vector<string> vec;
        char ch = up[0];
        for (int i = 0; i <= p.length(); i++)
        {

            string f = p.substr(0, i);
            string s = p.substr(i, p.length());
            vector<string> temp = retPerm((f + ch + s), up.substr(1));
            vec.insert(vec.end(), temp.begin(), temp.end());
        }
        return vec;
    }
}
void permutation(string p, string up)
{
    if (up.empty())
    {
        cout << p << endl;
        return;
    }

    char ch = up[0];
    for (int i = 0; i <= p.length(); i++)
    {

        string f = p.substr(0, i);
        string s = p.substr(i, p.length());
        permutation((f + ch + s), up.substr(1));
    }
}
int count_Permuations(string p, string up)
{
    if (up.empty())
        return 1;

   char ch = up[0];
        int count = 0;
        for (int i = 0; i <= p.length(); i++)
        {

            string f = p.substr(0, i);
            string s = p.substr(i, p.length());
             count += count_Permuations((f + ch + s), up.substr(1));
        }
        return count;
    
}
int main()
{
    string s = "abc";
    //    permutation("",s);
    vector<string> ans = retPerm("", s);
    for (string i : ans)
    {
        cout << i << endl;
    }

    cout << "\n"
         << count_Permuations("", s) << " ---count" << endl;
}