#include <bits/stdc++.h>
using namespace std;

void display(const int const1 = 5)
{
    const int const2 = 5;
    int array1[const1];
    int array2[const2];
    for(int i = 0;i<5;i++)
    {
        array1[i] = i;
        array2[i] = i*10;
        cout << array1[i] << ' ' << array2[i] << ' ' ;
    }
}
int main()
{
  display(5);
  return 0;
}