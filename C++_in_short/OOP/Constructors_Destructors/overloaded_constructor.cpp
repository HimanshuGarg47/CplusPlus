#include <bits/stdc++.h>
using namespace std;

class complax
{
    float x,y;

public:
    complax() {}    // constructor no arg
    complax(float a) // constructor-one arg
    {
        x = y = a;   
    }
    complax(float real, float imag) // constructor-two args
    {
        x = real; y = imag;   
    }

    friend complax sum(complax, complax);
    friend void show(complax);
};

complax sum(complax c1, complax c2)  // friend
{
    complax c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}

void show(complax c)  // friend
{
    cout << c.x << " + j" << c.y << "\n";
}

int main()
{
   complax A(2.7, 3.5);      // define & initialize
   complax B(1.6);    // define & initialize
   complax C;      // define 

   C = sum(A, B);
   cout << "A = "; show(A);
   cout << "B = "; show(B);
   cout << "C = "; show(C);

   // another way to give initial values (second method)
   complax P,Q,R;     // define P,Q and R
   P = complax(2.5 , 3.9);    // initialize P
   Q = complax(1.6, 2.5);  // initialize Q
   R = sum(P,Q);

    cout << "\n";
    cout << "P = "; show(P);
    cout << "Q = "; show(Q);
    cout << "R = "; show(R);

   return 0;
}