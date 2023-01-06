#include <stdio.h>

/** Function Prototypes in C++
All the functions in C++ (which are used first and defined later in the program) need to be prototyped.

Function prototypes are usually written at the beginning of the program, ahead of any programmer-defined functions (including main()).

The general form of a function prototype is:

data-type function_name(type 1 arg 1, type 2 arg 2, ..., type n arg n);
Where,
data-type represents the data-type of the item that is returned by the function,
function_name represents the function name, and
type 1, type 2, …, type n represents the data-type of the arguments arg 1, arg 2, …, arg n.

Notice that a function prototype resembles the first line of a function definition (though a function prototype ends with a semicolon).

Advantages of Function Prototypes in C++:
Use of function prototypes in C++ offers following advantages:

Prototypes enables the compilers to provide stronger type checking
Because of the use of prototypes, the compiler can find and report any questionable type conversions between the arguments used to call a function and the types of its (function;s) parameters
Because of the use of prototypes, the compiler can also catch differences between the number of arguments used to call a function and the number of parameters in the functions
Function prototypes help to trap bugs before they occur
Function prototypes help to verify that the program is working correctly by not allowing functions to be called with mismatched arguments
**/
int main()
{
    foo();
    getchar();
    return 0;
}
void foo()
{
    printf("foo called");
}
