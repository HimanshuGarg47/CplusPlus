#include <bits/stdc++.h>
using namespace std;
#define MAX 500

int Multiply(int i , int arr[],int n);  
void fact(int n)
{
    int arr[MAX];
    int arr_size =1;
    arr[0] = 1;
    for(int i = 2;i<=n;i++)
    {
        arr_size = Multiply(i,arr,arr_size);
    }

    for(int i = arr_size-1;i>=0;i--)
    {
        cout << arr[i];
    }
}


int Multiply(int x , int arr[],int n)
{
    int carry  = 0 ;
    for(int j = 0;j<n;j++)
    {
      int  prod = arr[j]*x+carry;
        arr[j] = prod%10;
        carry = prod/10;

    }

    while(carry)
    {
        arr[n++] = carry%10;
        carry /= 10;
        
    }

    return n;
}
int main()
{
    int number = 100;
    fact(number);

}