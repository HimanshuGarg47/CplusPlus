// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,k,count,j,t,n;
//     cin >> t;
    
//     while(t--)
//     { 
//         cin >> n;
//         count = 0;
//         if(n == 2)
//         {
//             cout << 0 << endl;
//             continue;
//         }
//         for(i=1;i<=n;i++)
//         {
//             j = 2;
//             while(j<=n)
//            // for(j=2;j<=n;j++)
//             {
//                 if(i%j==0)
//                 { j++;
//                 continue;}
//                 k = 1;
//                 while(j%k == 0)
//                {
//                     if(i%j == k)
//                     {
//                         count++;
//                     }
//                     k++; 
//                 }
//                j++;
//             }
//         }
//         cout << count << endl;
//     }
// }


 #include <iostream>
using namespace std;
#define MAX 100
int main()
{
    int i, k, count, j, t, n;
    long int triplets[MAX] = { 0 };
    triplets[2] = 1;
    triplets[3] = 3;
    triplets[4] = 6;
    int prev;
    for (int l = 5; l <= MAX; l++)
    {
        prev = 0;
        i = l;
        for (j = 2; j <= i; j++)
        {
            if (i % j != 0)
            {
                k = i % j;
                if (j % k == 0)
                    prev+=1;
            }
           
        }
        triplets[i] = prev + 1 + triplets[i - 1];
        
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
         cout << triplets[n] << "\n";

    }
    return 0;
}