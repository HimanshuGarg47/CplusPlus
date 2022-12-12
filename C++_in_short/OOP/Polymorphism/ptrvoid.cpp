// pointers to type void
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int intvar;       // integer variable
    float flovar;     // float variable
    int *ptrint;      // define pointer to int
    float *ptrflo;    // define pointer to float
    void *ptrvoid;    // define pointer to void
    ptrint = &intvar; // ok, int* to int*

    /* If for some unusual reason you really need to assign one kind of pointer type to another, you
    can use the reinterpret_cast. For the lines commented out in PTRVOID, that would look like
    this:*/
    ptrint = reinterpret_cast<int*>(flovar);
    ptrflo = reinterpret_cast<float*>(intvar);

    // ptrint = &flovar; //error, float* to int*
    // ptrflo = &intvar; //error, int* to float*
    ptrflo = &flovar; // ok, float* to float*

    ptrvoid = &intvar; // ok, int* to void*
    ptrvoid = &flovar; // ok, float* to void*
    return 0;
}