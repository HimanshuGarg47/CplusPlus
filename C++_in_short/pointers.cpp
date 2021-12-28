// C++ program to illustrate Array Name as Pointers in C++
#include <bits/stdc++.h>
using namespace std;

void geeks()
{
	// Declare an array
	int val[3] = { 5, 10, 15};

	// Declare pointer variable
	int *ptr;

	// Assign address of val[0] to ptr.
	// We can use ptr=&val[0];(both are same)
	ptr = val ;
	cout << "Elements of the array are: ";
	cout << ptr[0] << " " << ptr[1] << " " << ptr[2];

	return;
}

// Driver program


// Pointer Notation	Array Notation			Value
// *(*nums)			nums[0][0]					16
// *(*nums + 1)		nums[0][1]					18
// *(*nums + 2)		nums[0][2]					20
// *(*(nums + 1))		nums[1][0]					25
// *(*(nums + 1) + 1)	nums[1][1]				    26
// *(*(nums + 1) + 2)	nums[1][2]				    27
int main()
{
	geeks();
	return 0;
}
