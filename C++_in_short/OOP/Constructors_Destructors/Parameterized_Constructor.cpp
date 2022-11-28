#include <bits/stdc++.h>
using namespace std;

class integer
{
    int m, n;
public:
    integer(int x,int y);  // parameterized constructor

    .....
    .....
};

integer:: integer(int x, int y)
{
    m = x;
    n = y;
}


int main()
{
   /* when constr.parameterized, objec decl. such as
   integer int1; may not work. We mush pass values as argum. to construc. func.
   when an object declared. This in two ways
        # By calling the constructor explicitly.
        # By calling the constructor implicitly
        
    integer int1 = integer(0,100) // explicit call  
    
    integer int1(0,100);   // implicit call. known as shorthand method */



}