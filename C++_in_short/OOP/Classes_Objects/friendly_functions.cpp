#include <bits/stdc++.h>
using namespace std;

class sample
{
    int a;
    int b;
public:
    friend float mean(sample s);
    void setvalue()
    {
        a = 25;
        b = 40;
    }

};

float mean(sample s)
{
    return float(s.a + s.b)/2.0;
}


int main()
{
   sample X;  // object X
   X.setvalue();
   cout << "Mean vlaue = " <<  mean(X) << "\n";

   return 0;
}