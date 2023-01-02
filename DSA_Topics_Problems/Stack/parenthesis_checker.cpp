#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<int> ss;

        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == '{' || x[i] == '[' || x[i] == '(')
            {
                ss.push(x[i]);
            }
            else
            {
                if (x[i] == '}')
                {
                    if (ss.empty() || ss.top() != '{')
                    {
                        return false;
                    }
                }
                else if (x[i] == ']')
                {
                    if (ss.empty() || ss.top() != '[')
                    {
                        return false;
                    }
                }
                else if (x[i] == ')')
                {
                    if (ss.empty() || ss.top() != '(')
                    {
                        return false;
                    }
                }
                ss.pop();
            }
        }
        if (ss.empty())
            return true;

        return false;
    }
};

int main()
{
}