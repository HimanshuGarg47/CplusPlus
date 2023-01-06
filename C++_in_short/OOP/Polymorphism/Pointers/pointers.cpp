#include <iostream>
using namespace std;
int main()
{
    /* The addresses appear in descending order because local variables are stored on the stack,
    which grows downward in memory. If we had used global variables, they would have ascending addresses, since global variables are stored on the heap, which grows upward. */
    
    int var1 = 11; // define and initialize
    int var2 = 22; // three variables
    int var3 = 33;
    cout << &var1 << endl // print the addresses
         << &var2 << endl // of these variables
         << &var3 << endl;
    return 0;
}