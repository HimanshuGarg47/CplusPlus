#include <iostream>

using namespace std;
int fun(int n){
    if(n > 100)
    return n-10;
    else{
        return fun(fun(n+11));
    }
}


int recursion(int n){
    static int sum = 0;
    if(n == 1)
    return 1;
    else
    {
        sum =n+recursion(n-1);
        return sum;
    }
}

int sum(int n)
{
    if(n == 0)
    return 0;
    else
    {
        return sum(n-1) + n;
    }
}
int main()
{
    printf("%d",fun(95));

    printf("\nVlaue of recursion is %d",recursion(10));
    printf("\nVlaue of recursion is %d",sum(10));
}