#include <bits/stdc++.h>
using namespace std;
class integer
{
    int m,n;
    public:
    integer(int x,int y)  // inline constructor because declared and defined combinely
    {
        m = x;
        n = y;
    }

    /*
      integer(integer);        //  is illegal


    Parameter can be of any type except
    that of class to which it belongs
    
------------------------------------------------------
   
    However , a contructor can accept a reference 
    to its own class as parameter
    public:
        integer(integer&);  // copy constructor
   */



    void display(void)
    {
        cout << "m = " << m << "\n";
        cout << "n = " << n << "\n";
    }
};


int main()
{
   
}