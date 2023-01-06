// formato.cpp
// writes formatted output to a file, using <<
#include <fstream> //for file I/O
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ch = 'x';
    int j = 77;
    double d = 6.02;
    string str1 = "Kafka";         // strings without
    string str2 = "Proust";        // embedded spaces

    // if the file doesn’t exist, it is created. If it does exist, it is truncated and the new data replaces the old. 
    ofstream outfile("fdata.txt"); // create ofstream object
    outfile << ch                  // insert (write) data
            << j
            << ' ' // needs space between numbers
            << d
            << str1
            << ' ' // needs spaces between strings
            << str2;
    cout << "File written\n";
    // When the program terminates, the outfile object goes out of scope. This calls its        destructor,
    // which closes the file, so we don’t need to close the file explicitly
    return 0;
}