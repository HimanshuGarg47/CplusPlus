#include <bits/stdc++.h>
using namespace std;

class item
{
    int number; // private by default
    float cost; // private by default
public:
    void getdata(int a,float b);  // prototype declaration to be defined

    /* Function defind inside class */
    void putdata(void)
    {
        cout << "number : " << number << "\n";
        cout << "cost : " << cost << "\n";
    }
};

// ....................Member Function Definition..............
void item :: getdata(int a,float b)       // use membership label
{
    number = a;   // private variables directly used
    cost = b;
}

//..................Main program.................
int main()
{
    item x;     // create object x
    cout << "\nobject x " << "\n";

    x.getdata(100, 299.95);       // call member function
    x.putdata();

    item y;

    cout << "\nobject y" << "\n";

    y.getdata(200,175.50);
    y.putdata();

    return 0;

}