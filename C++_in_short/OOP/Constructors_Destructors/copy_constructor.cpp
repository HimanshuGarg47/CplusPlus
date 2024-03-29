#include <bits/stdc++.h>
using namespace std;

class code
{
    int id;

public:
    code() {}   // constructor
    code(int a) // constructor again
    {
        id = a;
    }
    code(code &x) // copy instructor
    {
        id = x.id; // copy in the value
    }
    void display(void)
    {
        cout << id;
    }
};

int main()
{
    code A(100);   // object A is created and initialized
    code B(A);    // copy constructor called
    code C = A;      // copy constructor called again

    code D;     // D is created , not initialized
    D = A;      // copy constructor not called

    cout << "\n id of A: "; A.display();
    cout << "\n id of B: "; B.display();
    cout << "\n id of C: "; C.display();
    cout << "\n id of D: "; D.display();

}