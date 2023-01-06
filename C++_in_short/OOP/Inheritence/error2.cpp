#include <iostream>
using namespace std;
class ABAC;
class AC;

class A {
    int i;
};

class AB: virtual public A{
    int j;
};


class ABAC: virtual public AB, virtual public AC{
    int l;
};

class AC: virtual public A, virtual public ABAC{
    int k;
};



int main()
{
	ABAC abac;
    cout << "sizeof ABAC:" << sizeof(abac);
	return 0;
}
