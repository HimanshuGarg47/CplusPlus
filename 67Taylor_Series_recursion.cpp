#include <iostream>
using namespace std;
// double e(int x,int n)      // time complexity O(n*n);
// {
//     static double p = 1,f = 1;
//     double r;
//     if(n==0)
//     return 1;
//     else
//     {
//         r = e(x,n-1);
//         p = p*x;
//         f = f*n;
//         return r+p/f;
//     }
// }

// Now we are using horner's rule to decrease time complexity O(n)
double e(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e(x, n - 1);
}
int main()
{
    printf("%lf ", e(2, 20));
}