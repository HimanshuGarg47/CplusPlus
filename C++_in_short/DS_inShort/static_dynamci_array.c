#include <stdio.h>
#include <stdlib.h>



int main()
{
//     int A[5] = {1,2,3,5,6};
//     int B[] = {3,33,53,55,2,1,6};
//   //  int C[5] = {0};
//     for(int i =  0;i< 5; i++)
//     {
//         printf("%d ",A[i]);
//     }
//     printf("\n\n");
//       for(int i =  0; i < sizeof(B)/sizeof(B[0]); i++)
//     {
//         printf("%d ",B[i]);
//     }


    int *p = (int *)malloc(6 * sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 6;
    p[3] = 8;
    p[4] = 99;
    p[5] = 100;


    for(int i = 0; i < 6;i++)
    {
        printf("%d ",p[i]);
    }

    int *q = (int *)malloc(10*sizeof(int));

    for(int i = 0; i < 6;i++)
    {
       q[i]  = p[i];
    }
    printf("\n\n");

    free(p);

    p = q;

    q = NULL;

    for(int i = 0; i < 10;i++)
    {
        printf("%d ",p[i]);
    }

    return 0;
}
