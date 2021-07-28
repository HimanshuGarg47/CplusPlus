#include <stdio.h>
#include <stdlib.h>
     int main( )

{ unsigned int x[4] [3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

        printf("Base address is %u\n\n",&x);
     printf("%u,%u, %u", x + 3, *(x + 3), *(x + 2) + 3);
     }

     // int main()
     // {
     //     int arr[3][4] = {{1,2,3,4},{3,5,5,2}, {4,0,8,7}};
     //     int *B[3];
     //     int **C;

     //     int i,j;

     //     B[0] = (int *)malloc(4*sizeof(int));\
//         B[1] = (int *)malloc(4*sizeof(int));
     //     B[2] = (int *)malloc(4*sizeof(int));

     //     C = (int **)malloc(3 * sizeof(int*));
     //     C[0] = (int *)malloc(4 * sizeof(int));
     //     C[1] = (int *)malloc(4 * sizeof(int));
     //     C[2] = (int *)malloc(4 * sizeof(int));

     //      for(i = 0;i<3;i++)
     //     {
     //         for(j=0;j<4;j++)
     //         {
     //             printf("%d ",C[i][j]);

     //         }
     //         printf("\n");
     //     }
     // }