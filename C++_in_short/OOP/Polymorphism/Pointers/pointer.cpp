#include <bits/stdc++.h>
using namespace std;

int main()
{
    char *cptr;        // pointer to char
    int *iptr;         // pointer to int
    float *fptr;       // pointer to float
    Distance *distptr; // pointer to user-defined Distance class
   // and so on.

   
        // int a = 10, *ptr1, **ptr2;
        // ptr1 = &a;
        // ptr2 = &ptr1;

        // cout << "The address of a : " << ptr1 << "\n";
        // cout << "The address of ptr1 : " << ptr2 << "\n";
        // cout << "\n\n";
        // cout << "After incrementing the address values:\n\n";
        // ptr1 += 2;
        // *ptr1 += 2;
        // cout << "The address of a : " << ptr1 << "\n";
        // ptr2 += 2;
        // cout << "The address of ptr1 : " << ptr2 << "\n";
        // cout << "The address of ptr1 : " << &ptr1 << "\n";

        int a = 10,
            *ptr;
    ptr = &a;
    cout << "The value of a is : " << a;
    cout << "\n\n";
    *ptr = (*ptr) / 2;
    cout << "The value of a is : " << (*ptr);
    cout << "\n\n";
}