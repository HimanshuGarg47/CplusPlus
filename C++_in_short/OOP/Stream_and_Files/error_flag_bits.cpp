#include <iostream>
#include <ios>

using namespace std;
int main()
{
    int i;
    cout << "\nEnter an integer: ";
    cin.unsetf(ios::skipws); // don’t ignore whitespace
    cin >> i;
    if (cin.good())
    {
        // no error
    }
    else
    {
        cout << "error\n";
    }
    // string a, b;
    // cin >> a;

    // cin.ignore();
    // getline(cin, b);

    // assert(b == "Where developers learn.");
    // assert(b == " Overflow");

}