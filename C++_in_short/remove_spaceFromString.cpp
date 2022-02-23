// removing space from string
#include <bits/stdc++.h>
using namespace std;
string removespaces(string str)
{
    stringstream sala;
    sala << str;
    str = "";
    string temp;
    
    while(!sala.eof())
    {
        sala >> temp;
        str += temp;

    }
    return str;

}
int main()
{
    string test = "This is Hmans gs fd";
    string removed = removespaces(test);
    cout << removed << endl;


}