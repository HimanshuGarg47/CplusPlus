#include <iostream>
using namespace std;
int main()
{
    int testcases,lastdigit,firstdigit,n;
    cin >> testcases;
    while(testcases--)
    {
        cin >> n;
        firstdigit = lastdigit = n%10;
        while(n)
        {
            
            firstdigit = n%10;
            n/=10;
        }
        cout << firstdigit+lastdigit << endl;
    }
}