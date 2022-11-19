#include <bits/stdc++.h>
using namespace std;
#define print(a) cout << a << endl;


void make_diff(void)
{
    cout << "\n\n";
    for(int i = 0;i<50;i++)
    cout << "-";
    cout << "\n";


}
int main()
{
    int x = 10;
   int *ip;
   ip = &x;
   *ip = 5;
   cout << x << endl;

   make_diff();

   char  * const ptr1 = (char*)"GOOD";  // constant pointer
    print(ptr1)
  //  ptr1 = (char*)"BAD"; // not allowed
    print(ptr1)

    make_diff();

    int cp = 20;
     
    /* contents of what it points to can't be changed */
    int const *ptr2 = &x;   // pointer to constant
    print(*ptr2);

//    *ptr2 = 20;  // not allowed
//     print(*ptr2);
    make_diff();

    /* Declare both pointer and variable as constants    */
     char * ab = (char *)"dpp";

    const char *const dp = "xyz";
    print(dp)
    // dp = (const char *const)&ab;  // not allowed

    make_diff();

    enum color{red, blue = 10, green, yellow = 1};
    color white = (color)2;
    print(green)
    print(blue)

    enum{X = 100};
    print(X)

    make_diff();

    cout << sizeof('x');

}