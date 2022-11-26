#include <bits/stdc++.h>
using namespace std;

class item
{
    static int count;  // shared with all objects, also known as class variable
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }

    void getcount(void)
    {
        cout << "count: " << count << "\n";
    }
};

int item::count;
int main()
{
    item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout << "After reading data" << "\n";

    a.getcount();
    b.getcount();
    c.getcount();
   
}