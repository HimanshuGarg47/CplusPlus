#include <iostream>
#include <stack>
using namespace std;
 
void reverse(string s)
{
    int count = 0,j = 0, open = 0, close = 0;
    stack<pair<char, int>> wallsopen;
    stack<pair<char, int>> wallsclose;
    while (s[j++])
    {
        if (s[j] == 47)
        {
            wallsopen.push({s[j],j});
            count++;
        }
        if (s[j] == 92)
        {
            wallsclose.push({s[j], j});
            // k = walls.top().second;
            // walls.pop();
        }
    }

    cout << "hello" << endl;
    while (count > 0)
    {
        open = wallsopen.top().second;
        wallsopen.pop();

        close = wallsclose.top().second;
        wallsclose.pop();
    cout << "by" << endl;
        while (++open < --close)
            swap<char>(s[open],s[close]);
    }

    j = 0;
    while(s[j++])
    {
      //  if(s[j]!= 47 && s[j]!= 92)
        cout << s[j];
    }
}
int main()
{
    string s;
    cin >> s;
    reverse(s);
}