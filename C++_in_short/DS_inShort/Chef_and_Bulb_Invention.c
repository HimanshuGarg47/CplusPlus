#include <iostream>
using namespace std;
it


















#include <stdio.h>
int main()
{
     long int n,gap,r,p,k;
    int t;    
    scanf("%ld",&t);
    while (t--)
    {
         scanf("%ld %ld %ld",&n,&p,&k);
         gap = (((n-1)-(n-1)%k)/k)+1;
         r = p%k;
        printf("%ld\n",(p/k)+1 + r*gap);
   }
}









// #include <stdio.h>
// int main()
// {
//     long int n, i, p, k;
//     int t,count;
//     scanf("%ld",&t);
//     while (t--)
//     {
//         scanf("%ld %ld %ld",&n,&p,&k);
//         count = 0;

//         for (i = 0; i < n/2; i++)
//         {
//             count++;
//             if (i == p)
//                 break;
//             count++;
//             if (i + k == p)
//                 break;
//         }
//         printf("%d\n",count);
//     }
// }