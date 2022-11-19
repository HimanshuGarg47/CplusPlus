#include <iostream>
using namespace std;
int main()
{
    int t,i;
    bool flag;
    string s;
    cin >> t;
    while(t--)
    {
        flag = false;
        cin >> s;
        for(i = s.length()-1;i>= 0;i--)
        {
            if(s[i] == '0' && !flag)
            continue;
            cout << s[i];
            flag = true;

        }
        cout << endl;
    }
}