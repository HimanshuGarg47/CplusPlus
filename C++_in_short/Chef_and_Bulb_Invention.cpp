#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int N,p,K;
        cin >> N >> p >> K;
        long int indec = p%K;
        long int result = p/K;
        result += (indec)*(N/K);
        if(N%K > indec)
        {
            result += indec;
        }
        else{
            result += N%K;
        }
        cout << result+1 << endl;
    }
}
















// #include <stdio.h>

// int main()
// {
//     long int t, n, i, p, k;
//     int count;
//     scanf("%ld", t);
//     while (t--)
//     {
//         scanf("%ld %ld %ld", n, p, k);
//         count = 0;

//         for (i = 0; i < (n & 1 ? n / 2 + 1 : n / 2); i++)
//         {
//             count++;
//             if (i == p)
//                 break;
//             count++;
//             if (i + k == p)
//                 break;
//         }
//         printf("%d", count);
//     }
// }