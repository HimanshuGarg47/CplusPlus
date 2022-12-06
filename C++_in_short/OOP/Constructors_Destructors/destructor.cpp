#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

class alpha
{
public:
    alpha()
    {
        cnt++;
        cout << "\nNo. of object created " << cnt;
    }

    ~alpha()
    {
        cout << "\nNo. of object destroyed " << cnt;
        cnt--;
    }
};

int main()
{
    cout << "\n\nEnter Main\n";
    alpha A1, A2, A3, A4;

    {
        cout << "\n\nEnter Block1\n";
        alpha A5;
    }

    {
        cout << "\n\nEnter Block2\n";
        alpha A6;
    }

    cout << "\n\nRe-Enter Main\n";

    return 0;
}