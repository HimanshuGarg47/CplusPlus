#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0;
    char *ptr[10] = {
        (char*)"books",
        (char*)"television",
        (char*)"computer",
        (char*)"sports"};

    cout << ptr[0] << endl;
    char str[25];
    cout << "\n\nEnter your favorite leisure pursuit : ";
    cin >> str;
    //cout << str << endl;
    for (i = 0; i < 4; i++)
    {
        if(!strcmp(str,(char*)ptr[i]))
        {
            cout << "\n\nYour favorite pursuit " << " is available here" << endl;
            break;
        }
    }
    if(i == 4)
    cout << "\n\nYour favorite " << " not available here" << endl;
}