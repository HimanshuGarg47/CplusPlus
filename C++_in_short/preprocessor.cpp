#include <iostream>
using namespace std;

void func1();
void func2();

void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();

void func1()
{
	printf("Inside func1()\n");
}

void func2()
{
	printf("Inside func2()\n");
}

// Driver code
int main()
{
	printf("Inside main()\n");

	return 0;
}

// This code is contributed by Shivani
