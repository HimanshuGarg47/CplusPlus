#include <bits/stdc++.h>
using namespace std;

class A{
public:
    A()
    {
        cout << "A";
    }
};

class B: virtual public A
{
public:
    B()
    {
        cout << "B";
    }
};

class C: virtual public B         // multilevel inheritence
{
public:
    C()
    {
        cout << "C";
    }
};

class D
{
public:
    D()
    {
        cout << "D";
    }
};

class E: public C, public D  //  hybrid inheritence
{
public:
    E()
    {
        cout << "E";
    }
};

class F: virtual public B, virtual public E
{
public:
    F()
    {
        cout << "F";
    }
};
int main()
{
    F f;
}