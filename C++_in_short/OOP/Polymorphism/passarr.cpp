// passarr.cpp
// array passed by pointer
#include <iostream>
using namespace std;
const int MAX = 5; // number of array elements
int main()
{
    void centimize(double *); // prototype
    double varray[MAX] = {10.0, 43.1, 95.9, 59.7, 87.3};
    centimize(varray);            // change elements of varray to cm
    for (int j = 0; j < MAX; j++) // display new array values
        cout << "varray["<< j << "] ="
                                      << varray[j] << "centimeters" << endl;
    return 0;
}
//--------------------------------------------------------------
void centimize(double *ptrd)
{
    for (int j = 0; j < MAX; j++)
        *ptrd++ *= 2.54; // ptrd points to elements of varray

    /* How do we know that the expression *ptrd++ increments the pointer
     and not the pointer contents?
      In other words, does the compiler interpret it as *(ptrd++),
     which is what we want, or as (*ptrd)++? It turns out that * (when used as the dereference
     operator) and ++ have the same precedence. However, operators of the same precedence are
     distinguished in a second way: by associativity. Associativity is concerned with whether the
     compiler performs operations starting with an operator on the right or an operator on the left.
     If a group of operators has right associativity, the compiler performs the operation on the right
     side of the expression first, then works its way to the left. The unary operators such as * and ++
     have right associativity, so the expression is interpreted as *(ptrd++), which increments the
     pointer, not what it points to. That is, the pointer is incremented first and the dereference        opeator is applied to the resulting address.
     */
}