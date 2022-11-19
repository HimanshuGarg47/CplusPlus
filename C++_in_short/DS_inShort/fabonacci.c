#include <stdio.h>
int n1 = 0,n2 = 1,cal;
void fibonacci(int n)
{
    
    if(n > 0)
    {
        cal = n1 +n2;
        n1 = n2;
        n2 = cal;
        printf("\t%d",cal);
        fibonacci(n-1);
    }

}
int main()
{
    int fib;
    printf("Enter number of elements to find fibonacci series\n");
    scanf("%d",&fib);
    if(fib > 0)
    {
        printf("%d\t%d",n1,n2); // comment
        fibonacci(fib-2);
    }
}

// #include <stdio.h>
// int main()
// {
//     int fib;
//     printf("Enter number of elements to find fibonacci series\n");
//     scanf("%d",&fib);
//     if(fib > 0)
//     {
//         if(fib == 1)
//         printf("0");
//         else if(fib > 1)
//         {
//             int r1 = 0,r2 = 1,cal;
//            printf("%d\t%d",r1,r2);
//             for(int i = 2;i < fib;i++)
//             {
//                 cal = r1 + r2;
//                 r1 = r2;
//                 r2 = cal;
//                 printf("\t%d",cal);
//             }
//         }
//     }
// }
