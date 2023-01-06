#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    if(s.length() == 1 || s.empty())
    return s;

    char temp = s.back();
    s.pop_back();
    s = temp + reverse(s);
    return s;

}

int find_length(string s)
{
    if(s.empty())
    return 0;

    
    return 1 + find_length(string(s.begin(),s.end()-1));
}

string to_upper(string s)
{
    if(s.empty())// || s.length() == 1)
    return s;


    if((s[0]) >= 97 && s[0] <= 122)
    return (s[0]+32)+to_upper(string(s.begin()+1,s.end()));
    else
    return s[0]+to_upper(string(s.begin()+1,s.end()));
}
int main()
{
    string s = "j";
    cout << reverse(s) << endl;

    cout << find_length(s) << endl;
    cout << to_upper(s) << endl;
   
   
}