#include <stdio.h>
// int fact(int n)
// {
//     int sum = 0;
//     if(n == 0)
//     return 1;
//     sum = n*fact(n-1);
//     return sum;
// }
// int main()
// {
//     int n;
//     printf("Enter number to calculate factorial \n");
//     scanf("%d",&n);
//     int factorial = fact(n);
//     printf("factorial of %d is %d",n,factorial);
// }


int main()
{
    int n,factorial = 1;
    printf("Enter number to calculate factorial \n");
    scanf("%d",&n);
    if(n== 0)
    printf("Factorial is 1");
    for(int i = n;i>=1;i--)
    {
        factorial *= i; 
    }
    printf("factorial of %d is %d",n,factorial);

}

