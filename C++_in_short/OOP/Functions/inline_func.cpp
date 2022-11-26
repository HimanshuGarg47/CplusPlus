#include <iostream>
using namespace std;

/* 
Inline functions are commonly used when the function definitions are small,
 and the functions are called several times in a program.
  Using inline functions saves time to transfer the control of the program 
  from the calling function to the definition of the called function. 
  For more reference visit https://www.mygreatlearning.com/blog/inline-functions-in-cpp/
*/ 

inline int add(int a, int b) // Inline function definition
{
    return a + b;
}


int main()
{
    cout << "The addition of 562 and 451 gives the value:" << add(562, 451) << "\n"; // Inline function call
    return 0;
}
// Output: The addition of 562 and 451 gives the value:1013
