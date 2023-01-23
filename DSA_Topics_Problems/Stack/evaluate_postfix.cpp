#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //Function to evaluate a postfix expression.
   int evaluatePostfix(string S)
    {
        int temp;
        stack<int> st;
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] >= 48 && S[i] <= 57)
            {
                st.push(S[i]-48);
            }
            else
            {
                char op = S[i];
                int temp1 = st.top();
                st.pop();
                int temp2 =  st.top();
                st.pop();
                

                switch (op)
                {
                case '*':
                    temp = temp1 * temp2;
                    st.push(temp);
                    break;

                case '/':
                    temp = temp2 / temp1;
                    st.push(temp);
                    break;

                case '+':
                    temp = temp1 + temp2;
                    st.push(temp);
                    break;
                case '-':
                    temp = temp2 - temp1;
                    st.push(temp);
                    break;

                default:
                    break;
                }
            }
        }
        return st.top();
    }
};
int main()
{
    string s = "231*+9-";
    Solution sol;
    cout << sol.evaluatePostfix(s);
}