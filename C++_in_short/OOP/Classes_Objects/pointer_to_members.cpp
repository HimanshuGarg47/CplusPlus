#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int m;

public:
    // const Member Functions
    void show(A) const;
};

void A::show(A a) const
{
    // A::* means "pointer-to_member of A class".
    int A::*ip = &A ::m; // &A::m means the "address of the m member of A class".

    // A a;
    cout << "a.*ip :" << a.*ip << endl; // display
    cout << "a.m :" << a.m << endl;     // same as above

    A *ap = &a;

    // ->* deferencing operator
    cout << "ap -> *ip :" << ap->*ip << endl;
    cout << "ap -> m :" << ap->m << endl;
}

int main()
{
    A a;

    a.show(a);
}