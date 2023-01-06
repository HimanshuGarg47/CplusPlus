#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;
int main()
{
    cout.setf(ios::right); // left justify output text
    cout << "This text is left-justified" << endl;
    cout.unsetf(ios::right); // return to default (right justified

    float var = 10;
    cout << setiosflags(ios::fixed) // use fixed decimal point
         << setiosflags(ios::showpoint) // always show decimal point
            << var << endl;

    cout << hex << var;
}