#include <stdio.h>

int isPowerof2(int x)
{
    return !(x & x-1);
}


int main()
{
    int i = 20;
    printf("i >> 1  %d\n",i>>2);
    printf("i << 1 %d",i << 2);

    (i & 1)?printf("\nOdd"):printf("\nEven");
    printf("\n\n");
     unsigned int x = 1;
    printf("Signed Result %d \n", ~x);
    printf("Unsigned Result %ud \n", ~x);
    printf("\n\n");
    printf("%d\n",isPowerof2(4));
    int z = 4;
    printf("%d",z & (1));
    return 0;
}