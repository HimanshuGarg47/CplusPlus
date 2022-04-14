#include <bits/stdc++.h>
using namespace std;
int Substr(vector<char> &s2, vector<char> &s1)
{
    int counter = 0; // pointing s2
    int i = 0;
    for (; i < s1.size(); i++)
    {
        if (counter == s2.size())
            break;
        if (s2[counter] == s1[i])
        {
            counter++;
        }
        else
        {
            // Special case where character preceding the i'th character is duplicate
            if (counter > 0)
            {
                i -= counter;
            }
            counter = 0;
        }
    }
    return counter < s2.size() ? -1 : i - counter;
}

void solve(int index, int size)
{
    if (index == -1)
        cout << "NO" << endl;
    else
    {
        cout << "YES\n"
             << index + 1 << " " << (index + 1 + size) << endl;
    }
}


void cal(void)
{
        int n;
        cin >> n;
        vector<char> bin;

        int one = 0, zero = 0;
        char ch;
        for (int i = 0; i < n; i++)
        {
            cin >> ch;
            bin.push_back(ch);
            if (bin[i] == '1')
                one++;
            else
                zero++;
        }

        if (n % 2)
        {
            cout << "NO" << endl;
            return;
        }
        int rm;
        if (one < zero)
        {
            rm = n / 2 - one;
            vector<char> sub(rm, 48);

            int index = Substr(sub, bin);
            solve(index, rm - 1);
        }
        else if (zero < one)
        {
            rm = n / 2 - zero;
            vector<char> sub(rm, 49);
            int index = Substr(sub, bin);
            solve(index, rm - 1);
        }
        else
        {
            vector<char> sub(2);
            sub[0] = '0';
            sub[1] = '1';
            int index = Substr(sub, bin);
            if (index == -1)
            {
                sub[1] = '0';
                sub[0] = '1';
                index = Substr(sub, bin);
            }
            solve(index, 1);
        }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cal();
    }
}