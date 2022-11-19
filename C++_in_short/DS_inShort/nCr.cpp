#include <stdio.h>
int fact(int f)
{
    if (f == 1)
        return 1;
    return fact(f - 1) * f;
}
int nCr(int n, int r)
{
    // if (n == r || r == 0)
    // {
    //     return 1;
    // }
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    return num / den;
}

int NCR(int n,int r)
{
    if(n == r || r == 0)
    return 1;
    return NCR(n-1,r-1) + NCR(n-1,r);
}
int main()
{
    printf("%d\n", nCr(4, 2));
    printf("%d\n", NCR(4, 2));
}