// STRING VECTOR EXAMPLE
// CPP program to illustrate
// Implementation of begin() function
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>

friend ostream& operator << (ostream& os, const vector<string> &myvector)
{
    os << myvector.begin() << endl;
    return os ;
}
int main()
{
	// declaration of vector container
	vector<string> myvector{ "This", "is",
							"Geeksforgeeks" };

	// using begin() to print vector
	for (auto it = myvector.begin();
		it != myvector.end(); ++it)
    //    printf("%d\t",myvector.begin());
		cout << myvector.begin();
	return 0;
}
