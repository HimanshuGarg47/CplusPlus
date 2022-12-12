#include <bits/stdc++.h>
using namespace std;

class X
{
private:
    int x1;

protected:
    int x2;

public:
    int x3;
};

class Y : public X
{
public:
    void f()
    {
        int y1, y2, y3;
        y1 = x1; // error: x1 is not inheritable bcz of private
        y2 = x2; // error: protected members can't access directly
        y3 = x3;
    }
};

class Z : X
{
public:
    void f()
    {
        int z1, z2, z3;
        z1 = x1;   // error : private 
        z2 = x2;    // error: private
        z3 = x3;    // error
    }
};

int main()
{
    int m, n, p;
    Y y;
    m = y.x1;
    n = y.x2;
    p = y.x3;

    Z z;

    m = z.x1;
    n = z.x2;
    p = z.x3;
}