#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    long int number;
    cin >> t;
    while(t--)
    {
        cin >> number;
        cout << (int)sqrt(number) << endl;
    }
}