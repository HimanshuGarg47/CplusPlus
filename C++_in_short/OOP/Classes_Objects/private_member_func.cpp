#include <bits/stdc++.h>
using namespace std;

class sample
{
    int m = 10;
    void read(void);    // private member function
public:
    void update(void);
    void write(void);

};

void sample:: read(void)
{
    cout << m << endl;
}

void sample :: update(void)
{
    read();  // simple call; no object used
}

int main()
{ 
    sample s1;
    s1.update();
  // s1.read();  // won't work
}