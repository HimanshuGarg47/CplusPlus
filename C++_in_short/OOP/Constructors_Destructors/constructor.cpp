#include <bits/stdc++.h>
using namespace std;

/* If no such constructor is defined,
 then compiler supplies default constructor*/
class integer
{
    int m, n;

public:
    // construtor should be declared in public section
    integer(void); // constructor declared

    ...........
    .............
};

integer::integer(void) // constructor defined
{
    m = 0;
    n = 0;
}
int main()
{ 
    /* It also initializes its data members m and n to 0 */
    integer int1;      // object int1 created
}