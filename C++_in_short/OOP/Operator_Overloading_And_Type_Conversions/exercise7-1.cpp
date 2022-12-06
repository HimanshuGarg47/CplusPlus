#include <bits/stdc++.h>
using namespace std;

class FLOAT
{
    float data;
public:
    FLOAT(float a)
    {
        data = a;
    }
    float operator +(FLOAT);
    float operator -(FLOAT);
    float operator *(FLOAT);
    float operator /(FLOAT);
};

float FLOAT::operator+(FLOAT f)
{
    return data + f.data;
}


float FLOAT::operator*(FLOAT f)
{
    return data * f.data;
}


float FLOAT::operator-(FLOAT f)
{
    return data - f.data;
}


float FLOAT::operator/(FLOAT f)
{
    if(f.data == 0)
    {
        cout << "Not defined";
        return -1;
    }
    return data / f.data;
}




int main()
{
   FLOAT f1(2.5), f2(1.5);
   cout << f1+f2 << endl;
   cout << f1-f2 << endl;
   cout << f1*f2 << endl;
   cout << f1/f2 << endl;
}