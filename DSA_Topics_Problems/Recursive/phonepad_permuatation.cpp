#include <bits/stdc++.h>
using namespace std;

void phonepad_perm(string p, string up) 
{
    if(up.empty())
    {
        cout << p << endl;
        return;
    }


    int num = (up[0]-'0');
    for(int i = num-1;i<num*3;i++)
    phonepad_perm(p+(char)(97+i),up.substr(1));


}
int main()
{
   string num = "123";
   phonepad_perm("",num);
}