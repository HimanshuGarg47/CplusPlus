// CPP program to implement direct index mapping
// with negative values allowed.


// If X is non-negative check if hash[X][0] is 1 or not. If hash[X][0] is one then the number is present else not present.
// If X is negative take absolute value of X and then check if hash[X][1] is 1 or not. If hash[X][1] is one then the number is present
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

// Since array is global, it is initialized as 0.
bool has[MAX + 1][2];

// searching if X is Present in the given array
// or not.
bool search(int X)
{
	if (X >= 0) {
		if (has[X][0] == 1)
			return true;
		else
			return false;
	}

	// if X is negative take the absolute
	// value of X.
	X = abs(X);
	if (has[X][1] == 1)
		return true;

	return false;
}

void insert(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		if (a[i] >= 0)
			has[a[i]][0] = 1;
	else
			has[abs(a[i])][1] = 1;
	}
}

// Driver code
int main()
{
	int a[] = { -1, 9, -5, -8, -5, -2 };
	int n = sizeof(a)/sizeof(a[0]);
	insert(a, n);
	int X = -5;
	if (search(X) == true)
	cout << "Present";
	else
	cout << "Not Present";
	return 0;
}
