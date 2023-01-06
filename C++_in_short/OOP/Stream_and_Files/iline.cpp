// iline.cpp
// file input with strings
#include <fstream> //for file functions
#include <iostream>
#include <limits>

using namespace std;
int main()
{
    const int MAX = 8000;          // size of buffer
    char buffer[MAX];            // character buffer
    ifstream infile("TEST.TXT"); // create file for input

    //     however, checking specifically for an eofbit means that we won’t detect the other error flags,
    // such as the failbit and badbit, which may also occur, although more rarely. To do this, we
    // can change our loop condition:
    //while( infile.good() ) // until any error encountered
    while (!infile.eof())        // until end-of-file
    {

        infile.getline(buffer, MAX); // read a line of text
        cout << buffer << endl;      // display it
    }
    return 0;
}